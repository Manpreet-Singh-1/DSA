#include <bits/stdc++.h>
using namespace std;
int longest_substring_with_no_repeating_char(string s){
    int ans=0;
    int i=0;int j=0;
    unordered_map<char,int>mp;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()==j-i+1){
            ans=max(ans,j-i+1);
            j++;
        }
        else{
            while(mp.size()<j-i+1){
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
        }
        j++;
    }
    }
    return ans;
}
int main() {
    string s="abcabcdbb";
    cout<<longest_substring_with_no_repeating_char(s);
    return 0;
}