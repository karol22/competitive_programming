#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int maximo = -1;
    map<pair<int, int>, int> r; // pair to freq
    map<int, bool> multiples; // multiples js para cada i
    map<int,int> maximos; // maximo para cada i
    set<pair<int, int> > b; // query b, tal que los elementos aparecen un maximo de veces

    int n, q;
    cin>>n>>q;
    char c;
    while(q--){
        /*
        cout<<"maximo: ";
        for(auto e : b){
            cout<<e.first<<" "<<e.second<<"     ";
        }
        cout<<endl;
        */

        cin>>c;
        if(c == 'Q'){
            int i;
            cin>>i;
            if(maximos[i] == 0) cout<<"No info\n";
            else if(multiples[i]) cout<<"Multiple\n";
            else cout<<maximos[i]<<"\n";
        } else if(c == 'R'){
            int i, j;
            cin>>i>>j;
            // cout<<"max freq i " << r[make_pair(i, maximos[i])]<<" "<<maximos[i]<<endl;
            int max_freq_i= r[make_pair(i, maximos[i])]; // old max frequency
            r[make_pair(i, j)]++;
            int v = r[make_pair(i, j)];
            if(v > maximo){
                b.clear();
                b.insert(make_pair(i, j));
                maximo = r[make_pair(i, maximos[i])];
            }
            if(v == maximo){
                b.insert(make_pair(i, j));
            }
            
            if(v > max_freq_i){
                maximos[i] = j;
                multiples[i] = false;
                // cout << "c1: "<<v<<endl;
            }else if(v == max_freq_i){
                // cout << "c2: "<<v<<endl;
                multiples[i] = true;
            }
        } else if(c == 'B'){
            if(b.size() < 1) cout<<"No info\n";
            else if(b.size() > 1) cout<<"Multiple\n";
            else{
                for(auto e : b){
                    cout<<e.first<<" "<<e.second<<"\n";
                }
            }
        }
    }

    return 0;
}