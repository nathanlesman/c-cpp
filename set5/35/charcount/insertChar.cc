#include "charcount.ih"

void CharCount::insertChar()
{
    charInfo.ptr[nChar0bj] = enlarge (charInfo.ptr, charInfo.nChar0bj, charInfo.nCharObj + 1);
    for (int idx = charInfo.nCharObj; idx > d_insertPosition; --idx)
    {
        charInfo.ptr[idx] = charInfo.ptr[idx - 1];
    }
    charInfo.ptr[d_insertPosition].count = 1;
    charInfo.ptr[d_insertPosition].ch = d_charCase;
    ++charInfo.nCharObj;
}