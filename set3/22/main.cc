#include "main.ih"

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        cerr << "Error: please provide a command-line argument.\n";
        return 1;
    }
    
    if(stoul(argv[1]) > MAXFIB)
    {
        cerr << "Error: value too big to calculate.\n";    
        return 1;
    }

    cout << "Fibonacci number: "
         << (argc == 2 ? fib(stoul(argv[1])) : rawfib(stoul(argv[1])))
         << "\n";

    if(argc == 2)
        cout << "Golden ratio: " << golden_ratio(stoul(argv[1])) << "\n";

}

