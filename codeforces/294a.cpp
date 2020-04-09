#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>aux;
        a[i] = aux;
    }
    int m;
    cin>>m;
    for(int i=0;i<m; i++){
        int x, y;
        cin>>x>>y;
        int r = a[x-1] - y;
        int l = y-1;
        a[x-1] = 0;
        if(x!=n){
            a[x]+=r;
        }
        if(x!=1){
            a[x-2]+= l;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<"\n";
    }

}