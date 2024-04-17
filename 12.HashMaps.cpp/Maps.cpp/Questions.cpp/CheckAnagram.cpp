#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isAnagram(string &t1,string &t2) { // T.C. O(n) -> where n is the total no of characters and S>C=O(m) where m is the total no of unique characters
    if(t1.size()!=t2.size()) return false;
    unordered_map<char,int> ana;
    for (int i = 0; i < t1.size(); i++){
        ana[t1[i]]++;
        ana[t2[i]]--;}
    for(auto pair:ana){
        if(pair.second!=0) return false;
    }
    return true;
}
int main() {
    string t1="hello";
    string t2="lleho";
    cout << (isAnagram(t1,t2) ? "Yes" : "No") << endl;
    return 0;
}