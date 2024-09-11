#include <iostream>

using namespace std;

int main() {
    size_t value;
    cin >> value;

    cout << (value % 2 ? "odd" : "even") << '\n';

    cout << ((value & 1) ? "odd" : "even") << '\n';

    cout << (value - (value & ~1) ? "odd" : "even") << '\n';

    cout << ((value >> 1) << 1 != value ? "odd" : "even") << '\n';

    cout << ((value - (value / 2 * 2)) ? "odd" : "even") << '\n';

    cout << (value ^ (value ^ (value & ~1)) ? "odd" : "even") << '\n';

    return 0;
}

