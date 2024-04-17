#include <iostream>
#include <vector>
using namespace std;
// print 1 to n using recursion
void print(int n, int k)
{
    if(k==0) return;
    print(n,k-1);
    cout<<n*k<<" ";
    return;
}

int main()
{
    int n = 10;
    int k = 9;
    print(n, k);

    return 0;
}