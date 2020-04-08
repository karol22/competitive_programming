#include <bits/stdc++.h>

using namespace std;

struct Interval{
    int original_pos;
    int fin;
    int inicio;
    bool cameron;
    Interval(){
        cameron = true;
    }
};

bool comp(const Interval &a, const Interval &b) {
    if(a.inicio == b.inicio)
        return (a.fin < b.fin);
    return a.inicio < b.inicio; 
}

Interval intervalo[1000];
int posiciones[1000];

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        intervalo[i].cameron = true;
    }
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        intervalo[i].inicio = x;
        intervalo[i].fin = y;
        intervalo[i].original_pos = i;
    }
    sort(intervalo, intervalo+n, comp);
    /*
        for(int i=0; i<n; i++){
        cout<<intervalo[i].inicio<<" "<<intervalo[i].fin<<endl;
    }
    */
   int ultimo = -1;
   bool jaime = true; // hay un intervalo que termina en ultimo y es de jaime
   for(int i=0; i<n; i++){
       posiciones[intervalo[i].original_pos] = i;

       if(ultimo > intervalo[i].inicio){
           if(!jaime){
               intervalo[i].cameron = false;
           }
       }
       if(i < n-1){
           if(intervalo[i+1].inicio < intervalo[i].fin){ //se empalman
                if(ultimo > intervalo[i+1].inicio){
                    cout<<"IMPOSSIBLE\n";
                    return;
                }
           }
       }
       if(ultimo < intervalo[i].fin){
           ultimo = intervalo[i].fin;
           jaime = !intervalo[i].cameron;
       }
   }
   for(int i=0; i<n; i++){
       if(intervalo[posiciones[i]].cameron){
           cout<<'C';
       } else cout<<'J';
   }
    cout<<'\n';

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