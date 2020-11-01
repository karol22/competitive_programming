#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    int nTest;
    int nHouses;
    int currCandies;

    cin >> nTest;
    while (nTest--) {
        int ni = 0;
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;

        cin >> nHouses;
        while (nHouses--) {
            cin >> currCandies;
            ni = currCandies + max(n2, n3);
            n3 = n2;
            n2 = n1;
            n1 = ni;
        }
        cout << max(n1, n2)<<"\n";
    }

    return 0;
}