#include "strings.ih"

void Strings::enlarge()
{
    if (d_capacity == 0) // let us start space for 8 elements
    {
        d_info.ptr = rawCapacity(4); // argument 4 because we get space for
                                     // twice as many elements
        d_capacity = 8;
        return;
    }
    
    // allocate a larger array
    string *tmp = rawCapacity(d_capacity);

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        tmp[idx] = d_str[idx];
        
    operator delete(d_str); // delete the old array
    
    d_str = tmp;

    d_capacity *= 2;
}

