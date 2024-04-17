#include <bits/stdc++.h>
using namespace std;
vector<int> targetSumPair(vector<int> &v, int targetsum)
{
    unordered_map<int, int> mp; // element,index 
    vector <int> ans={-1,-1};
    for(int i=0;i<v.size();i++){
        if(mp.count(targetsum-v[i])){
            ans[0]=i;
            ans[1]=mp[targetsum-v[i]];
            break;
        }
        mp.insert(make_pair(v[i],i));
    }
    return ans;
}
int main()
{
    vector<int> arr{13, 4, 5, 11, 13, 10};
    int targetsum = 13;
    vector<int> ans = targetSumPair(arr, targetsum);
    cout << ans[0] << " " << ans[1];
    return 0;
}