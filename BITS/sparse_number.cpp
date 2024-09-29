// check if n is sparse or not 
#include<iostream> 
using namespace std; 

bool checkSparse(int n) 
{ 
    // n is not sparse if there is set 
    // in AND of n and n/2 
    if (n & (n>>1)) 
        return false; 
  
    return true; 
} 

int main() 
{ 
    int n;
    cin>>n;
    cout<<checkSparse(n)<<endl;
    return 0; 
} 