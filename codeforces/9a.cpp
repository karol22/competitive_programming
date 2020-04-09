#include <bits/stdc++.h>
#include <algorithm>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int gcd(int a, int b) 
{  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main(){ _
    int y,w;
    cin>>y>>w;
    int x = 6 - max(y, w) + 1;
    int n = 6;
    int gg = gcd(x, n);
    x/=gg;
    n/=gg;
    cout<<x<<"/"<<n<<"\n";
}