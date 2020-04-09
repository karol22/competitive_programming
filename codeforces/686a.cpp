#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    long long n, cur;
    cin>>n>>cur;
    int ch = 0;
    string s;
    getline(cin, s);
    while(n--){
        getline(cin, s);
        istringstream ss(s);
        char sign;
        int x;
        ss>>sign>>x;
        if(sign == '+'){
            cur+=x;
        } else {
            if(x>cur){
                ch++;
            } else{
                cur-=x;
            }
        }
    }
    cout<<cur<<" "<<ch<<"\n";
    return 0;
}