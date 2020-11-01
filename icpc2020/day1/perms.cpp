#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

bool isprime(int n){ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 

string s, original;
vector<int> permutation;
int n;
bitset<8> chosen;

void get3(string ss){
    for(int i = 1; i < ss.length() - 1; i++){
        for(int j = i + 1; j < ss.length(); j++){
            string s1, s2, s3;
            s1 = ss.substr(0, i);
            s2 = ss.substr(i, j - i);
            s3 = ss.substr(j);
            cout<< s1 <<" "<<s2<<" "<<s3<<endl;
        }
    }
}

void search() {
if (permutation.size() == n) {
           for(int i = 0; i < permutation.size(); i++){
               s[i] = original[permutation[i]];
           }
           get3(s);
        } else {
            for (int i = 0; i < n; i++) {
                if (chosen[i]) continue; chosen[i] = true; permutation.push_back(i); search();
                chosen[i] = false;
                permutation.pop_back();
            }
        }
}

int main(){ _
    cin>>original;
    s = original;
    n = original.length();
    search();
    return 0;
}
