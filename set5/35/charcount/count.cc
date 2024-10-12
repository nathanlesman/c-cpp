#include "charcount.ih"

CharCount::charCount()

{
    CharInfo charInfo{nullptr, 0};
    size_t number_character = 0;
    while (text.get(d_charCase))
    {
    getOccurence();
    ++ number_character
    }
    processChar();
    return number_character;

}
