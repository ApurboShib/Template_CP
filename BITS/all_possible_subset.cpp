#include <bits/stdc++.h>
using namespace std;

void possibleSubsets(char A[], int N)
{
    for(int i = 0; i < (1 << N); ++i)
    {
        for(int j = 0; j < N; ++j)
            if(i & (1 << j))
                cout << A[j] << " ";
        cout << endl;
    }
}

int main()
{
    int i, n;
    cin >> n;
    vector<char> a(n); 
    for(i = 0; i < n; i++) 
        cin >> a[i]; 
    
    possibleSubsets(a.data(), n);  
    
    return 0;
}