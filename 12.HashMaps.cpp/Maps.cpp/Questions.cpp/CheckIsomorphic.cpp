#include <bits/stdc++.h>
using namespace std;
bool checkNoOneToManyMapping(string s1, string s2)
{
    unordered_map<char, char> mp;
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        if (mp.find(ch) != mp.end())
        {
            if (mp[ch] != s2[i])
            {
                return false;
            }
        }
        else
        {
            mp[ch] = s2[i]; // mapping unique one to one relations
        }
    }
    return true;
}
bool isIsomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    // checking one-to-many mapping from s1 to s2;
    bool s1s2 = checkNoOneToManyMapping(s1, s2);
    // checking one-to-many mapping from s2 to s1;
    bool s2s1 = checkNoOneToManyMapping(s2, s1);
    return s1s2 && s2s1;
}
bool f(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    unordered_map<char,char> mp;
    for(int i=0;i<s1.size();i++){
        if(mp.count(s1[i])){
            if(mp[s1[i]]!=s2[i]) return false;
        }
        mp[s1[i]]=s2[i];
    }
    mp.clear();
    for(int i=0;i<s1.size();i++){
        if(mp.count(s2[i])){
            if(mp[s2[i]]!=s1[i]) return false;
        }
        mp[s2[i]]=s1[i];
    }
    return true;
}
int main()
{
    string s1 = "aabd";
    string s2 = "xxyx";
    cout << boolalpha << f(s1, s2);
    return 0;
}