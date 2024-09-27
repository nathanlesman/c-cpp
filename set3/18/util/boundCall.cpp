#include "util.ih"
#include "../returnvalues/returnvalues.hh"

void boundCall(size_t argc, char *argv[]) 
{
    size_t argNumber = stoul(argv[1]);
    ReturnValues result = combine(argc, argv, argNumber);

    cout << "Argument number (bound call): " << result.nr << ", Value: " << result.value << "\n";
}

