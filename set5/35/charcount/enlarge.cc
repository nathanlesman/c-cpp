
#include "charcount.ih" 
Char *enlarge(Char *old, size_t oldsize, size_t newsize)
    {
        Char *tmp = new Char[newsize];  // allocate larger array

        for (int idx = 0; idx != oldsize; ++idx)
            tmp[idx] = old[idx];            // copy old to tmp

        delete[] old;                       // delete the old array
        return tmp;                         // return new array
    }