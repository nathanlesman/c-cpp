#include "calculator.ih"

void Calculator::evaluate()
{
    if (((d_rnumber == 0 ) && ((d_str_operation == '/') ||(d_str_operation == '%'))) ||
                ((d_str_operation == '%') && (d_lnumber < 0 || d_rnumber < 0 || d_lint || d_rint)))
        cout << "false" << "\n"; 

    else    
    {  
        switch (d_str_operation)
        {
            case '+':
                cout << d_lnumber + d_rnumber << "\n"; 
            break;
            case '-': 
                cout << d_lnumber - d_rnumber << "\n";  
            break;
            case '*': 
                cout << d_lnumber * d_rnumber << "\n"; 
            break;
            case '/': 
                cout << d_lnumber / d_rnumber << "\n"; 
            break;
            case '%': 
                cout << d_lnumber % d_rnumber <<"\n"; 
            break;
        }
    }        
}

