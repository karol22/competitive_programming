#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int a, d, n;
    cin>>n;
    char x;
    a = d = 0;
    while(cin>>x){
        if(x == 'A') a++;
        if(x == 'D') d++;

    }
    if(a>d) cout<<"Anton\n";
    else if(a<d) cout<<"Danik\n";
    else cout<<"Friendship\n";

    return 0;
}