#include "returnvalues.ih"

ReturnValues combine(int argc, char *argv[], size_t requestedArg) {
    ReturnValues result;
    result.nr = requestedArg;

    if (requestedArg < argc) {
        result.ok = true;
        result.value = argv[requestedArg];
    } else {
        result.ok = false;
        result.value = "";
    }

    return result;
}

