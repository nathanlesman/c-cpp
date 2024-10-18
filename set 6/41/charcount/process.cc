#include "charcount.ih"

void CharCount::process(char ch)
{
    size_t idx;
    Action action = locate(&idx, ch);

    (this->*actionPtr[action])(ch, idx);
}
