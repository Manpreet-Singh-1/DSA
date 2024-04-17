#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool canBeEqual(vector<string> &v) // T.C. O(n) -> where n is the total no of characters and S>C=O(m) where m is the total no of unique characters
{
    unordered_map<char, int> mp; // char,frequency
    for(string s:v){
        for(char c:s){
            mp[c]++;
        }
    }
    for(auto itr:mp){
        if(itr.second%v.size()!=0) return false;
    }
    return true;
}
int main()
{
    vector<string> v{"collegeee", "coll", "collegge"};
    vector<string> x{"wala", "wah", "wallahah"};
    cout << (canBeEqual(v) ? "Yes" : "No") << endl;
    cout << (canBeEqual(x) ? "Yes" : "No") << endl;
    return 0;
}