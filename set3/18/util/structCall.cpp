#include "util.ih"
#include "../returnvalues/returnvalues.hh"

bool structCall(size_t argc, char *argv[]) 
{
    size_t argNumber = stoul(argv[1]);
    ReturnValues result = combine(argc, argv, argNumber);

    if (!result.ok) 
    {
        cout << "Argument " << argNumber << " does not exist." << "\n";
        cout << "Usage: " << argv[0] << " <argument-number> [args...]" << "\n";
        return false;
    }

    cout << "Argument number: " << result.nr << ", Value: " << result.value << "\n";
    return true;
}

