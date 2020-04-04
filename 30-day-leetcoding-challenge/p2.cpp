#include <bits/stdc++.h>
using namespace std;

set<int>happies;
class Solution {
public:
    bool isHappy(int n){
        set<int> s;
        while(s.count(n) == 0){
            s.insert(n);
            int sum = 0;
            while(n>0){
                int r = n%10;
                sum += r*r;
                n/=10;
            }
            if(sum == 1) return true;
            n=sum;
        }
        return false;
    }
};

int main(){
    

    Solution s = Solution();

    for(int i=0; i<1000; i++){
        if(s.isHappy(i)) cout<<i<<"\n";
    }

}