#include "calculator.ih"

bool Calculator::getOperator()
{
    if(d_str_operation.length() == 1 && (ope[0] == '+' || ope[0] == '-' || 
                             ope[0] == '*' || ope[0] == '/' || 
                             ope[0] == '%'))
        return true;

    else 
        return false;
}
