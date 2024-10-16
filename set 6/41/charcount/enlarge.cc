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
    Char *ptr = rawCapacity(d_capacity);

    transfer(ptr, 0, d_capacity); // transfer the entire d_info.ptr to ptr[0]
    
    operator delete(d_info.ptr); // delete the old array
    
    d_info.ptr = ptr;

    d_capacity *= 2;
}
