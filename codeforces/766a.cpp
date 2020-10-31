#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
 
int main(){ _
    string a, b;
    cin>>a>>b;
    if(a == b){
        cout << "-1\n";
        return 0;
    }
    cout<<max(a.length(), b.length()) << "\n";
    return 0;
}