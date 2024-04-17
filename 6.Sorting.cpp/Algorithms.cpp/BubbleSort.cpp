#include <iostream>
#include <vector>
using namespace std;               // Stable Sort
void BubbleSort(vector<int> &arr)  // Time Complexity : O(N*N)
{   
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 1; j < arr.size()-i; j++)
        {
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    return;
    
}
int main() // Bubble Sort : repeatedly swap adjacent elements until the array is sorted
{
    int n;
    cout << "Enter thr size of the array :\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    BubbleSort(v);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}