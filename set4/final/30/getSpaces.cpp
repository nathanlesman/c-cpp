#include "calculator.ih"

void getSpaces()
{
    d_first_space = d_line.find (" ");
    d_second_space = d_line.find(" ", first_space + 1);
}
