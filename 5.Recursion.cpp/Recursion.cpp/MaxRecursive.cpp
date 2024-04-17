#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int maxEle(int *arr,int idx,int n){  
    if(idx==n) return INT_MIN;
    return arr[idx]>maxEle(arr,idx+1,n) ? arr[idx] : maxEle(arr,idx+1,n);

}
int main() {
    int arr[]={0,5,7,8,9,-2};
    int max=maxEle(arr,0,5);
    // for(int i=0;i<5;i++){      // For second max;
    // if(arr[i]==max) arr[i]=0;
    // }
    cout<<maxEle(arr,0,5);
   
}