#include <fstream>
using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    // This works fine as ofstream defaults to output mode
    ofstream out1{ "/tmp/out1" };
    hello(out1);

    // Fix: Open fstream with explicit output mode
    fstream out2{ "/tmp/out2", ios::out };  // Added ios::out
    hello(out2);
}
