#include "calculator.ih"

bool Calculator::expression(string &line)
{
    size_t first_space = line.find (" ");
    size_t second_space = line.find(" ", first_space + 1);

    if (first_space == string::npos || second_space == string::npos)
        return false;
    
    d_lnumber = stod(line.substr(0, first_space));
    d_str_operation = line.substr(first_space + 1, 1);
    d_rnumber = stod(line.substr(second_space + 1));

    intlh = (floor(lh) == lh);
    intrh = (floor(rh) == rh);
    
    if (getOperator(ope)&& number(&lh, &intlh) && number (&rh, &intrh))
        return true;
    
    else
        return false;    
}
