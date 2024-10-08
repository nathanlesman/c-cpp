#include "calculator.ih"

void Calculator::run()
{     
    cout << "? ";
    
    while(getline(cin, d_line)) 
    {    
        if (expression(d_line)) 
        {
            evaluate()
            cout << "? ";
        } 
            
        else 
            cout << "Error: Invalid expression" << '\n';
        }
    } 
}

