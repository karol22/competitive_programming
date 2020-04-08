#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int numlower(string x){
    int ans = 0;
    for(int i=0; i<x.length(); i++){
        if(x[i]<='z' && x[i]>='a'){
            ans++;
        }
    }
    return ans;
}
string toLowercase(string a){
    string ans = a;
    for(int i=0; i<a.length(); i++){
        if(a[i]<='Z' && a[i]>='A'){
            ans[i] = a[i]-'A'+'a';
        }
    }
    return ans;
}
string toUppercase(string a){
    string ans = a;
    for(int i=0; i<a.length(); i++){
        if(a[i]<='z' && a[i]>='a'){
            ans[i] = a[i]-'a'+'A';
        }
    }
    return ans;
}

int main(){ _
    string s;
    cin>>s;
    int lower = numlower(s);
    if(lower >= s.length() - lower){
        cout<<toLowercase(s);
    } else cout<<toUppercase(s);

    return 0;
}