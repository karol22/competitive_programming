#include <bits/stdc++.h>
using namespace std;

set<int>happies;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        long long ans = 0;
        int curr = 0;
        for(int i=0; i<nums.size(); i++){
            curr = max(nums[i], curr+nums[i]);
            if(curr>ans) ans = curr;
        }
        return ans;
    }
};

int main(){
    

    Solution s = Solution();

    for(int i=0; i<1000; i++){
        if(s.isHappy(i)) cout<<i<<"\n";
    }

}