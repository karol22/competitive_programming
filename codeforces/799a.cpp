#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    long long n, t, k, d;
    cin>>n>>t>>k>>d;
    if((n+k-1)/k*t-t>d){
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}