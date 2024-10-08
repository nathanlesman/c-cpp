#include "calculator.ih"

bool Calculator::expression()
{
    getSpaces();

    if (d_first_space == string::npos || d_second_space == string::npos)
        return false;

    parseExpression();
    
    if (getOperator(d_str_operation) && number(&d_lnumber, &d_lint) && number (&d_rnumber, &d_rint))
        return true;
    
    else
        return false;    
}
