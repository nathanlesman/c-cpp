#include "calculator.ih"

void parseExpression()
{
    string str_lnumber = d_line.substr(0, d_first_space)
    string str_rnumber = d_line.substr(d_second_space + 1)
    
    d_lint = (str_lnumber.find(".") != string::npos)
    d_rint = (str_rnumber.find(".") != string::npos)
    
    d_lnumber = stod(str_lnumber);
    d_str_operation = line.substr(d_first_space + 1, d_second_space - d_first_space - 1);
    d_rnumber = stod(str_rnumber);
}
