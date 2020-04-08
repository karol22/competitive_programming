#include <bits/stdc++.h>

using namespace std;

int M[100][100];

void solve(){
    int n;
    cin>>n;
    int k, r, c;
    k=r=c=0;
    for(int i=0; i<n; i++){
        set<int> s;
        bool repeated_row = false;
        for(int j=0; j<n; j++){
            int w;
            cin>>w;
            if(i==j){
                k+=w;
            }
            M[i][j] = w;
            if(!repeated_row){
                if(s.count(w)){
                    repeated_row = true;
                    r++;
                }
                s.insert(w);
            }
        }
    }
    for(int i=0; i<n; i++){
        set<int> s;
        bool repeated_col = false;
        for(int j=0; j<n; j++){
            if(!repeated_col){
                if(s.count(M[j][i])){
                    repeated_col = true;
                    c++;
                }
                s.insert(M[j][i]);
            }
        }
    }
    cout<<k<<" "<<r<<" "<<c<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        solve();
        i++;
    }
    
} 