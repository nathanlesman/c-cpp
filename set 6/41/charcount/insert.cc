#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)
{
    if (d_info.nCharObj > d_capacity)
        enlarge();
    
    // shift the d_info.ptr elements from idx one spot to the right
    shiftRight(idx);

    d_info.ptr[idx] = Char{ ch, 1 }; // insert the new element
    ++d_info.nCharObj;               // added new element
}
