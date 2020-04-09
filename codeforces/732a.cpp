#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){ _
    int n, k;
    cin>>n>>k;
    k%=10;
    for(int i=1; i<=10; i++){
        if(n*i%10 ==k%10 || n*i%10 == 0){
            cout<<i<<"\n";
            return 0;
        }
    }
    return 0;
}