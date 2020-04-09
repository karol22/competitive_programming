#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int n, k;
    cin>>n;
    set<int> nums[3];
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        nums[k-1].insert(i+1);
    }
    cout<<min(nums[0].size(), min(nums[1].size(), nums[2].size()))<<"\n";
    while(nums[0].size() > 0 && nums[1].size() > 0 && nums[2].size() > 0){
        for(auto x: nums[0]){
            cout<<x<<" ";
            nums[0].erase(x);
            break;
        }
        for(auto x: nums[1]){
            cout<<x<<" ";
            nums[1].erase(x);
            break;
        }
        for(auto x: nums[2]){
            cout<<x<<" ";
            nums[2].erase(x);
            break;
        }
        cout<<"\n";
    }
    return 0;
}