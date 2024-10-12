#include "charcount.ih"

void CharCount::getOccurrence()
{
for (int idx = 0; idx <= charInfo.nCharObj; idx++)
        {
            if (charInfo.ptr[idx].ch == d_charCase)
                {
                    ++ charInfo.ptr[idx].count;
                    return
                }
        }
}