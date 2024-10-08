#include "calculator.ih"

void Calculator::run()
{     
    cout << "? ";
    
    while(getline(cin, d_line)) 
    {    
        if (expression()) 
        {
            evaluate()
            cout << "? ";
        } 
            
        else 
            cout << "Error: Invalid expression" << '\n';
        }
    } 
}

