#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int n;
    cin>>n;
    vector<int> v(n);
    int players[2] = {0, 0};
    int p=0, q=n-1;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int i=0;
    while(p<=q){
        int mayor;
        if(v[p]>v[q]){
            mayor = v[p];
            p++;
        } else{
            mayor = v[q];
            q--;
        }
        players[i%2]+=mayor;
        i++;
    }
    cout<<players[0]<<" "<<players[1]<<"\n";
    return 0;
}