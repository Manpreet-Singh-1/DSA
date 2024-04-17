#include <bits/stdc++.h>
using namespace std;
int main(){
    set <string> name;
    int a=0;
    cout<<"enter total number of name she want to enter ";
    cin>>a;
    while(a){
        a--;
        string s;
        cout<<"enter a name";
        cin>>s;
        name.insert(s);
    }
    for(auto x: name){
        cout<<x<<" ";
    }
}