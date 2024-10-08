#include "calculator.ih"

void Calculator::evaluate()
{
    if (((d_rnumber == 0 ) && ((d_operation == '/') ||(op == '%'))) ||
                ((op == '%') && (lh < 0 || rh < 0 || intlh || intrh)))
        cout << "false" << "\n"; 

    else    
    {  
        switch (op)
        {
            case '+':
                cout << lh + rh << "\n"; 
            break;
            case '-': 
                cout << lh - rh << "\n";  
            break;
            case '*': 
                cout << lh * rh << "\n"; 
            break;
            case '/': 
                cout << lh / rh << "\n"; 
            break;
            case '%': 
                cout << fmod(lh,rh) <<"\n"; 
            break;
        }
    }        
}

