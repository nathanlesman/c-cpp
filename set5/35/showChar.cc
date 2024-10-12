#include "charcount/charcount.h"
#include "main.h"


void showChar(const CharInfo& charInfo)
{
    
    for (int idx = 0; i < charInfo.nCharObj; i++)
    {
        cout << 'char '<< charInfo.ptr[i].ch
        << ':'<< charInfo.ptr[i].count << ' times'
        << '\n';
    }
}