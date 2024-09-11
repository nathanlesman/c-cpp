#include <iostream>
#include <iomanip>

union BitFieldUnion {
    size_t raw_value;

    struct {
        unsigned int field1 : 3;   // Bits 1 through 3
        unsigned int field2 : 4;   // Next 4 bits
        unsigned int field3 : 5;   // Next 5 bits
        unsigned int field4 : 4;   // Next 4 bits
        unsigned int field5 : 4;   // Next 4 bits
        unsigned int field6 : 4;   // Next 4 bits
        unsigned int field7 : 4;   // Next 4 bits
        unsigned int field8 : 5;   // Next 5 bits
        unsigned int field9 : 2;   // Next 2 bits
    } fields;
};

int main() {
    BitFieldUnion bf;

    bf.fields.field1 = 7;   // 111 in binary
    bf.fields.field2 = 15;  // 1111 in binary
    bf.fields.field3 = 10;  // 01010 in binary
    bf.fields.field4 = 6;   // 0110 in binary
    bf.fields.field5 = 7;   // 0111 in binary
    bf.fields.field6 = 15;  // 1111 in binary
    bf.fields.field7 = 15;  // 1111 in binary
    bf.fields.field8 = 0;   // 00000 in binary
    bf.fields.field9 = 3;   // 11 in binary

    std::cout << std::hex << std::setw(16) << std::setfill('0') << bf.raw_value << '\n';

    return 0;
}

