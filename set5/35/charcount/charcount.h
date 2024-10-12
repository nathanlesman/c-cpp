#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <istream>
#include <string>
#include <iostream>
#include "charcount.ih"

struct CharCount
{

    private:
        char d_charCase;
        size_t d_insertPosition;
        enum action
        {
            APPEND,
            INSERT,
            INC
        };

        struct CharInfo
        {
            char *ptr;
            int nCharObj;
        };
        struct Char
        {
            char ch;
            int count;

        };

        void appendChar();             
        void insertChar();
        void incrementCharCount();
        void getOccurence();
        void processChar();
        const CharInfo& info() const;
        Char *enlarge(Char *old, size_t oldsize, size_t newsize);
        action locate();  
        

        public:
        CharInfo charInfo;
        charCount(istream& text = cin);
};

        
#endif
