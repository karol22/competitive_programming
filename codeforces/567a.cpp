#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
 
int main(){ _
    int n;
    cin>>n;
    vector<int> nums(n);
    
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i < n; i++) {
        if(i > 0 && i  < n - 1){
            cout<<min(nums[i] - nums[i - 1], nums[i + 1] - nums[i]) << " "
            << max(nums[i] - nums[0], nums[n - 1] - nums[i]) << "\n";
        } else if (i == 0){
            cout<< nums[1] - nums[0] << " " << nums[n - 1] - nums[0] << "\n";
        } else {
            cout<< nums[n - 1] - nums[n - 2] << " " << nums[i] - nums[0] << "\n";
        }
    }
    return 0;
}