#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    int retval = 0;

    for (int i = 0; i < 32; i++) {
        retval <<= 1;
        retval |= (n & 1);
        n >>= 1;
    }

    return retval;
}

int main() {
    cout << reverseBits(12345678) << endl;
    return 0;
}