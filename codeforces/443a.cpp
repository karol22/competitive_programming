#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    string s;
    getline(cin, s);
    set<char> ss;
    for(int i=0; i<s.length(); i++){
        if(s[i]<='z' && s[i] >= 'a'){
            ss.insert(s[i]);
        }
    }
    cout<<ss.size()<<"\n";
    return 0;
}