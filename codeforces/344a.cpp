#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int n;
    cin>>n;
    int ans = 0;
    char cur = 'x';
    string s;
    while(n--){
        cin>>s;
        if(s[1] != cur){
            ans++;
            cur = s[1];
        }
    }
    cout<<ans<<"\n";
    return 0;
}