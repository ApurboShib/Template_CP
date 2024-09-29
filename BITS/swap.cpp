#include <iostream>
using namespace std;

unsigned int swapBits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
    // Move all bits of the first set to the rightmost side
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);

    // Move all bits of the second set to the rightmost side
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);

    // XOR the two sets
    unsigned int xo = (set1 ^ set2);

    // Put the XOR bits back to their original positions
    xo = (xo << p1) | (xo << p2);

    // XOR the 'xo' with the original number so that the two sets are swapped
    unsigned int result = x ^ xo;

    return result;
}

int main()
{
    unsigned int res = swapBits(28, 0, 3, 2);
    cout << "Result = " << res << endl;
    return 0;
}