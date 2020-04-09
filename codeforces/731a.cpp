#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    string s;
    cin>>s;
    int ans =0;
    int pos = 0;
    for(auto x: s){
        ans+= min(((x-'a')-pos+26)%26, (pos-(x-'a')+26)%26);
        pos = x-'a';
    }
    cout<<ans<<"\n";
    return 0;
}