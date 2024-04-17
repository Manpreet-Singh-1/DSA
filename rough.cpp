#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
// int conver(int b){
//     int r;
//     while(b){
//         r+=
//     }
// }
int make_it_set(int n,int i){
    return (n|(1<<i));
}
int main() {
    int a;
    cout<<make_it_set(14,1);
    
}
