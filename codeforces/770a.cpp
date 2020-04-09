#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cout<<(char)('a'+(i%k));
    }
    return 0;
}