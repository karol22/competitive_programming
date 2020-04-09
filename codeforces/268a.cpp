#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int n;
    cin>>n;
    int ans = 0;
    map<int, int> h, g;
    for(int i=0; i<n; i++){
        int r, s;
        cin>>r>>s;
        h[r]++;
        g[s]++;
    }
    for(auto x: h){
        ans+= x.second * g[x.first];
    }
    cout<<ans<<"\n";
    return 0;
}