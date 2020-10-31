Copy
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
 
int main(){ _
    int n, e;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>e;
        v[e-1] = i;
    }
    for(auto x: v){
        cout<<x+1<<" ";
    }
    return 0;
}
