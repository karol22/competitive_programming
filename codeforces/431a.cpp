#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    vector<int> v(4);
    string s;
    for(int i=0; i<4; i++){
        cin>>v[i];
    }
    cin>>s;
    int ans = 0;
    for(auto x: s){
        ans+= v[x-'1'];
    }
    cout<<ans<<"\n";
    return 0;
}