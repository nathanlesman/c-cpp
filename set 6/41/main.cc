#include "main.ih"

int main()
{
    CharCount cc;
                                            // process and count all chars
    cout << "processed " << cc.count(cin) << " characters\n";

    CharCount::CharInfo const &info = cc.info();

    for (size_t idx = 0; idx != info.nCharObj; ++idx)
    {
        showChar(info.ptr[idx].ch);
        cout << ": " << info.ptr[idx].count << " times\n";
    }
}