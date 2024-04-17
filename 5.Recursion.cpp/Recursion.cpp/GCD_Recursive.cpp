#include <iostream>
#include <vector>
using namespace std;

// Euclid's Algorithm :
// when a> :
// GCD(a,b)=GCD(b,a%b)=GCD(b,a-b)

int GCD(int a, int b)
{
    if(a<b) return GCD(b,a);
    if(b==0) return a;
    return GCD(b,a%b);
}

int main()
{
    cout << GCD(18, 12);
    return 0;
}