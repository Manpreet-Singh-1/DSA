#include <iostream>
#include <vector>
using namespace std; // Unstable Sortf 
// Selection Sort : repeatedly find minimum element in unsorted part and place it at the beggining of the unsorted part
void SelectionSort(vector<int> &arr)
{
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        int * mini=&arr[i];
        for (int j = i+1; j < n; j++)
        {
            if(*mini>arr[j]) mini=&arr[j];
        }
        if(*mini!=arr[i])
            swap(*mini,arr[i]);
    }
}
int main()
{ // Time Complexity : O(N*N) & Space Complexity : O(1)
    int n;
    cout << "Enter thr size of the array :\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    SelectionSort(v);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}