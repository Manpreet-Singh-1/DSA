#include <iostream>
#include <vector>
using namespace std;
int Ways(int m, int n)
{
    if(m==1 and n==1) return 1;
    if(m==1) return 1;
    if(n==1) return 1;
    return Ways(m-1,n)+Ways(m,n-1);
    
}
int main()
{
    cout << Ways(4, 4);
    return 0;
}