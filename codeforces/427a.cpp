#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int n;
    cin>>n;
    int ans = 0, e;
    int polices = 0;
    while(n--){
        cin>>e;
        if(e < 0){
            if(polices == 0) ans++;
            else polices --;
        } else {
            polices+=e;
        }
    }
    cout<<ans;
    return 0;
}