#include <iostream>
#include <vector>
using namespace std;
void KeyPad(string str, int i, string result, vector<string> &li, vector<string> &v)
{
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit = str[i] - '0';
    for(int j=0;j<v[digit].size();j++){
        KeyPad(str,i+1,result+v[digit][j],li,v);
    }
}
int main()
{
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string digits = "9749589859";
    vector<string> li;
    KeyPad(digits, 0, "", li, v);
    for (int i = 0; i < li.size(); i++)
    {
        cout << li[i] << " ";
    }
    return 0;
}