#include "main.ih"

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        cout << "Usage: " << argv[0] << " <argument-number> [arguments...]\n"; //guide the user on the correct way to run the program with required arguments
        return 1;
    }


    
    // Call structCall to check argument
    if (!structCall(argc, argv)) 
        return 1;

    // Call boundCall for further processing
    boundCall(argc, argv);
}

