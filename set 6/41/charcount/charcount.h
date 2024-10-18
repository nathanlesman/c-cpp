#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

struct CharCount            // struct, as CharCount defines public types
{
    struct Char
    {
        char ch;
        size_t count;
    };

    struct CharInfo
    {
        Char *ptr;
        size_t nCharObj;
    };

    ~CharCount();

    private:
        enum Action
        {
            APPEND,
            INSERT,
            INC
        };

        CharInfo d_info = { 0, 0 };
        size_t d_capacity = 0; 

    public:
        size_t count(std::istream &in);
        CharInfo const &info() const;
        size_t capacity() const;
        
    private:
        void process(char ch);
        Action locate(size_t *idx, char ch);
        void inc(char ch, size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch, size_t idx);            // in fact:insert at d_nfo.nCharObj

        Char *rawCapacity(size_t const capacity) const;
        void enlarge();
        void shiftRight(size_t idx);
        static void (CharCount::*actionPtr[])(char ch, size_t idx);
        void destroy();
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline size_t CharCount::capacity() const
{
    return d_capacity;
}

#endif
