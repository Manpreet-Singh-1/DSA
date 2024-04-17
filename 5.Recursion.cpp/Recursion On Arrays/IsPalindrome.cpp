#include <iostream>
#include <vector>
using namespace std;
bool IsPalindrome(int num, int *temp) // 12321
{
    
}
int main()
{
    int num = 12321;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout << IsPalindrome(num, temp);

    return 0;
}