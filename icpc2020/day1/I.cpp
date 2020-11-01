#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

bool isdigit(char c){
    return c >= '0' && c <= '9';
}
int validate(string s){
    bool lower = false, upper = false, consec = true, special = false, len = false, digit = false;
    if(s.length() >= 10) len = true;
    for(int i = 0; i < s.length(); i++){
        if(!lower){
            if(s[i] <= 'z' && s[i] >= 'a') lower = true;
        }
        if(!upper){
            if(s[i] <= 'Z' && s[i] >= 'A') upper = true;
        }
        if(!special){
            if(s[i] == '.' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '/' || s[i] == '(' || s[i] == '&'|| s[i] == ')')
                special = true;
        }
        if(isdigit(s[i])) digit = true;

        if(i > 0){
            if(isdigit(s[i]) && isdigit(s[i - 1])){
                if(s[i] == s[i-1] + 1 || s[i] + 1 == s[i-1]) consec = false;
            }
        }
    }
    /*
    cout<<lower<<endl;
    cout<<upper<<endl;
    cout<<consec<<endl;
    cout<<digit<<endl;
    cout<<special<<endl;
    cout<<len<<endl;
    */
    return lower + upper + (consec && digit) + special+ len;
}

int main(){ _
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++ ){
        string s;
        cin>>s;
        int ans = validate(s);
        switch (ans)
        {
        case 5:
            cout<<"Assertion number #"<<i<<": Strong\n";
            break;
        case 4:
            cout<<"Assertion number #"<<i<<": Good\n";
            break;
        case 3:
            cout<<"Assertion number #"<<i<<": Weak\n";
            break;
        default:
            cout<<"Assertion number #"<<i<<": Rejected\n";
            break;
        }
    }
    
    return 0;
}