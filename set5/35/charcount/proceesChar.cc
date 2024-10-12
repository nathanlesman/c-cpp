#include "charcount.ih"

void CharCount::processChar()
{   d_insertPosition = 0;
    action = locate(d_charCase, d_insertPosition);      
    switch (action)
     {
        case INC:    
            incrementCharCount(d_insertPosition);
            break;
        case INSERT:        
            insertCharAtPosition(d_charCase, d_insertPosition);
            break;
        case APPEND:    
            appendChar(d_charCase);
            break;
     }
}