#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int k;
    set<int> m;
    for(int i=0; i<4; i++){
        cin>>k;
        m.insert(k);
    }
    cout<<4-m.size()<<"\n";
    return 0;
}