#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int holes[18];
    for(int i = 0; i < 18; i++){
        int e;
        cin>>e;
        holes[i] = e;
    }
    int ans = 0;
    string s;
    getline(cin, s);
    for(int i = 0; i < 18; i++){
        getline(cin, s);
        if( s == "hole in one"){
            ans++;
        } else if( s == "condor"){
            ans+=holes[i] - 4;
        } else if( s == "albatross"){
            ans+=holes[i] - 3;
        } else if( s == "eagle"){
            ans+=holes[i] - 2;
        } else if( s == "birdie"){
            ans+=holes[i] - 1;
        } else if( s == "par"){
            ans+=holes[i];
        } else if( s == "bogey"){
            ans+=holes[i] + 1;
        } else if( s == "double bogey"){
            ans+=holes[i] + 2;
        } else if( s == "triple bogey"){
             ans+=holes[i] + 3;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
