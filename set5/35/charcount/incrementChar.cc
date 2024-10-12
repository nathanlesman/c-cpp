#include "charcount.ih"

void CharCount::incrementCharCount()
{
    charInfo.ptr[d_insertPosition].count ++;
}