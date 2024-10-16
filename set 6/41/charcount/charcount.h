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

    private:
        enum Action
        {
            APPEND,
            INSERT,
            INC
        };

        CharInfo d_info = { 0, 0 };
        size_t d_sizeArr = 0; // size of the Char * array

    public:
        size_t count(std::istream &in);
        CharInfo const &info() const;
        size_t capacity() const
        void cleanup();
        
    private:
        void process(char ch);
        Action locate(size_t *idx, char ch);
        void inc(size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch);            // in fact:insert at d_nfo.nCharObj

        void transfer(Char *dest, size_t begin, size_t end);
        Char *rawCapacity(size_t const capacity) const
        void enlarge()
        void shiftRight(size_t idx)
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline size_t CharCount::capacity() const
{
    return d_capacity;
}

inline void CharCount::cleanup()
{
    operator delete(d_info.ptr);
}


#endif
