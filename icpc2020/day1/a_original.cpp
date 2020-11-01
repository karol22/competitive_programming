#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int maximo = -1;
    map<pair<int, int>, int> r; // pair to freq
    map<int,int> maximos; // maximo para cada i
    vector<pair<int, int> > b; // query b, tal que los elementos aparecen un maximo de veces

    int n, q;
    cin>>n>>q;
    char c;
    while(q--){
        cin>>c;
        if(c == 'Q'){
            int i;
            cin>>i;
            if(maximos[i] == 0) cout<<"No info\n";
            else cout<<maximos[i]<<"\n";
        } else if(c == 'R'){
            int i, j;
            cin>>i>>j;
            r[make_pair(i, j)]++;
            int v = r[make_pair(i, j)];
            if(v > maximo){
                b.clear();
            }
            if(v >= maximo){
                b.push_back(make_pair(i, j));
            }
            if(v > r[make_pair(i, maximos[i])]) maximos[i] = j;

        } else if(c == 'B'){
            if(b.size() < 1) cout<<"No info\n";
            else if(b.size() > 1) cout<<"Multiple\n";
            else{
                cout<<b[0].first<<" "<<b[0].second<<"\n";
            }
        }
    }

    return 0;
}