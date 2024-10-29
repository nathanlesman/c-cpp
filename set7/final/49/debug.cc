#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        cerr << "Usage: " << argv[0] << " <number_of_iterations>\n";
        return 1;
    }

    // Convert command line argument to number
    size_t iterations = stoul(argv[1]);
    
    // Create output stream (initialized with cout's buffer) and set failbit
    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);

    // Version 1: Without if-statement check
    // Commented out to submit version 2
    /*
    for (size_t it = 0; it != iterations; ++it) // it is current iteration
        out << "Nr. of command line arguments " << argc << '\n';
    */

    // Version 2: With if-statement check
    for (size_t it = 0; it != iterations; ++it) 
    {
        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
    }
}

