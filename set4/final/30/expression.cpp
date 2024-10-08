#include "calculator.ih"

bool Calculator::expression(string &line)
{
    getSpaces(line)

    if (d_first_space == string::npos || d_second_space == string::npos)
        return false;

    string str_lnumber = line.substr(0, first_space)
    string str_rnumber = line.substr(second_space + 1)
    
    d_lint = (str_lnumber.find(".") != string::npos)
    d_rint = (str_rnumber.find(".") != string::npos)
    
    d_lnumber = stod(str_lnumber);
    d_str_operation = line.substr(first_space + 1, second_space - first_space - 1);
    d_rnumber = stod(str_rnumber);
    
    if (getOperator(d_str_operation) && number(&d_lnumber, &d_lint) && number (&d_rnumber, &d_rint))
        return true;
    
    else
        return false;    
}
