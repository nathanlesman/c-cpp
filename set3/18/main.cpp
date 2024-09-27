#include "main.ih"

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        cout << "Usage: " << argv[0] << " <argument-number> [args...]\n";
        return 0;
    }

    // Call structCall to check argument
    if (!structCall(argc, argv)) 
    {
        return 1;
    }

    // Call boundCall for further processing
    boundCall(argc, argv);
}

