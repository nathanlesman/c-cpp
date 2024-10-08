#include "calculator.ih"

bool Calculator::expression(string &line)
{
    size_t first_space = line.find (" ");
    size_t second_space = line.find(" ", first_space + 1);

    if (first_space == string::npos || second_space == string::npos)
        return false;

    string str_lnumber = line.substr(0, first_space)
    string str_rnumber = line.substr(second_space + 1)
    
    d_lint = (str_lnumber.find(".") != string::npos)
    d_rint = (str_rnumber.find(".") != string::npos)
    
    d_lnumber = stod(str_lnumber);
    d_str_operation = line.substr(first_space + 1, second_space - first_space - 1);
    d_rnumber = stod(str_rnumber);
    
    if (getOperator(ope)&& number(&lh, &intlh) && number (&rh, &intrh))
        return true;
    
    else
        return false;    
}
