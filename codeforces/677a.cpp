#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int n, k, e, ans;
    cin>>n>>k;
    ans = n;
    while(n--){
        cin>>e;
        if(e>k) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}