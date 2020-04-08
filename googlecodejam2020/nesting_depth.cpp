#include <bits/stdc++.h>

using namespace std;

int M[100][100];

void solve(){
    string  s;    
    cin>>s;
    deque<char> d;
    int c = 0;
    for(int i=0; i<s.length(); i++){
        int val = s[i] - '0';
        int num = abs(val - c);
        char p = '(';
        if(val - c < 0){
            p = ')';
        }
        for(int j=0; j<num; j++){
            d.push_back(p);
        }
        c = val;
        d.push_back(s[i]);
    }
    while(!d.empty()){
        cout<<d.front();
        d.pop_front();
    }
    while(c--){
        cout<<")";
    }
    cout<<"\n";

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