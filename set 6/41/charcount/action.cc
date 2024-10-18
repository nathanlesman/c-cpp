#include "charcount.ih"

void (CharCount::*CharCount::actionPtr[])(char ch, size_t idx)
{
    &CharCount::append,    // matches APPEND
    &CharCount::insert,    // matches INSERT
    &CharCount::inc        // matches INC
};
