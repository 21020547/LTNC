#include <bits/stdc++.h>
using namespace std;
bool check(vector <int> a, vector<int> b, int n) {
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != b[i]) return false ;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> a,b;
    for (int i = 0 ; i < n ; i++) {
        int m;
        cin >> m;
        a.push_back(m);
    }
    for (int i = 0 ; i < n ; i++) {
        int m;
        cin >> m;
        b.push_back(m);
    }
    if (check(a,b,n) == true) cout << "YES" ;
    else cout << "NO" ;
}