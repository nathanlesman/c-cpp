#include "calculator.h"

void getSpaces(string &line)
{
    d_first_space = line.find (" ");
    d_second_space = line.find(" ", first_space + 1);
}
