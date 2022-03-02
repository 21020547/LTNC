#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a,b;
    for (int i = 0 ; i < n ;i++) {
        int m;
        cin >> m;
        a.push_back(m);
    }
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != a[i+1] && i != n-1) b.push_back(a[i]);
        if ( i == n -1) b.push_back(a[i]);
    }
    for (int i = 0 ; i < b.size() ; i++) {
        cout << b[i] << " " ;
    }
}