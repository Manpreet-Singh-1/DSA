#include <iostream>
#include <vector>
using namespace std;
int powRecursive(int p, int q)
{
    if(q==1) return p;
    int r=powRecursive(p,q/2);
    if(q%2==0) return r*r;
    return p*r*r;
}
int Armstrong(int n, int d)
{ 
    if(n==0) return 0;
    return powRecursive(n%10,d)+Armstrong(n/10,d);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int NoOfDigits = 0;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        NoOfDigits++;
    }
    int result = Armstrong(n, NoOfDigits);
    if (result == n)
        cout << "It's an Armstrong number!";
    else
        cout << "It's not an Armstrong number!";
    return 0;
}