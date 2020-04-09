#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    long long n, b, d, x;
    long long ans = 0, cur = 0;
    cin>>n>>b>>d;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<=b){
            cur+=x;
            if(cur>d){
                cur = 0;
                ans++;
             }
        }
    }
    cout<<ans<<"\n";
    return 0;
}