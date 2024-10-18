#include "charcount.ih"

void CharCount::enlarge()
{
    if (d_capacity == 0) // let us start space for 8 elements
    {
        d_info.ptr = rawCapacity(4); // argument 4 because we get space for
                                     // twice as many elements
        d_capacity = 8;
        return;
    }
    
    // allocate a larger array
    Char *tmp = rawCapacity(d_capacity);
    for (size_t idx = d_info.nCharObj - 1; idx--;)
        new(tmp + idx) Char{ d_info.ptr[idx] };
    
    destroy();
    d_info.ptr = tmp;
    d_capacity *= 2;
}
