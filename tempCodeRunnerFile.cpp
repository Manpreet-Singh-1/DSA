#include <iostream>
#include <vector> // Stable Sorting algorithm
using namespace std; // Time complexity : O(nlogn) & Space complexity : O(logn+n)=O(n) (O(logn) due to recursive stacks and O(n) due to two temporary arrays a and b)
void merge(vector <int> &v, int l,int m,int r){ // Merges arrays from (l to mid) and (mid+1 to r) 
    vector <int> re;
    int i=l,j=m+1;
    while(i<=m and j<r){
      if(v[i]>v[j]) {
        re.push_back(v[j]);
        j++;
      }
      else{
        re.push_back(v[i]);
        i++;
      }
    }
    while(i<=m) {
      re.push_back(v[i]);
      j++;
    }
    while(j<r) {
      re.push_back(v[j]);
      j++;
    }
    for (int i = l,j=0; i < r; i++,j++)
    {
      v[i]=re[j];
    }  
}
void mergeSort(vector<int> &v,int i,int n){ // sorts array from indices l to r
    if(i>=n) return;
    mergeSort(v,0,n/2+1);
    mergeSort(v,n/2+1,n);
    merge(v,i,n/2,n);
}

int main() {
    vector<int>arr{8,5,7,8,1,3,9,3,4,2,5};
    int n=arr.size();
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}