#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);

    Solution s = Solution();

    cout<<s.singleNumber(v)<<"\n";

}