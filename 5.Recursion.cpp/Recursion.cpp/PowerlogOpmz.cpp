#include <iostream>
#include <vector>
using namespace std;
int power(int p, int q)
{
    if(q==1) return p;
    int r=power(p,q/2);
    if(q%2==0) return r*r;
    return p*r*r;
}
int main()
{
    cout << power(7, 2);
    return 0;
}