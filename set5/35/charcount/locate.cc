#include "charcount.ih"

action locate()
{
    for (int idx = 0; idx < charInfo.nCharObj; idx++ )
        {
            if (charInfo.ptr[idx].ch == d_charCase)
                {
                    d_insertPosition = idx 
                        
                    return INC;
                }
            else if (charInfo.ptr[idx].ch > d_charCase)
                {
                    d_insertPosition = idx ;
                    return INSERT;
                }
        }
    d_insertPosition = charInfo.nCharObj
    return APPEND;

}