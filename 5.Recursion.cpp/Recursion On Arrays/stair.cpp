# include <iostream>
# include <vector>
 using namespace std;
int Ways(int a){
    if(a==0) return 1;
    if(a==1) return 1;
    return Ways(a-1)+Ways(a-2);
}
int main() {
    cout<<Ways(5);
    return 0;
}