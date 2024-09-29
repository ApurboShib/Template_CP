#include <bits/stdc++.h>

using namespace std;

double power(double x, int n)
{
    if (n == 0)  // Base case: any number to the power of 0 is 1
        return 1.00;
    
    double ans = power(x, n / 2);  
    if (n % 2 == 0)
        return ans * ans;
    else if (n > 0)
        return ans * ans * x;
    else  // When n is negative
        return ans * ans / x;
}

int main()
{
    double n;
    int p;
    // n is the number, and p is the power
    cout << "Enter the number and its power: " << endl;
    cin >> n >> p;

    // Special case handling: 0 to a negative power is undefined
    if (n == 0 && p < 0) {
        cout << "Undefined (division by zero)." << endl;
        return 0;
    }

    double ans = power(n, p);
    cout << ans << endl;

    return 0;
}