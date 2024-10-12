#include "charcount.ih"

void CharCount::appendChar()
{
    charInfo.ptr[nCharObj] = enlarge (charInfo.ptr, charInfo.nCharObj, charInfo.nCharObj + 1);
    charInfo.ptr[charInfo.nCharObj].ch = d_charCase;
    charInfo.ptr[charInfo.nCharObj].count = 1;
    
}