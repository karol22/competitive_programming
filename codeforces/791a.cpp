#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int a, b, ans = 0;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        ans++;

    }
    cout<<ans<<"\n";

    return 0;
}