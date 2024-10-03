#include "calculator.ih"

void calculator::evaluate(int lh, char op, int rh )
{
    if (((rh == 0 ) && ((op == '/') ||(op == '%')))
     ||((op == '%') && (lh < 0 || rh < 0))){
        cout << "false" << "\n"; 
}else
    {  switch (op) {
            case '+':cout << lh + rh << "\n"; 
                break;
            case '-': cout << lh - rh << "\n";  
                break;
            case '*': cout << lh * rh << "\n"; 
                break;
            case '/': cout << lh / rh << "\n"; 
                break;
            case '%': cout << lh % rh <<"\n"; 
                break;
        }
    }        
}

