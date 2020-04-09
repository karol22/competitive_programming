#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    string s, t;
    cin>>s>>t;
    int ans = 0;
    for(int i=0; i<t.length(); i++){
        if(s[ans] == t[i]) ans++;
    }
    cout<<ans+1<<"\n";
}