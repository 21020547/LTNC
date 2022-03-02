#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double m;
    cin >> n;
    vector<double> a;
    for (int i = 0 ; i < n+1 ;i++) {
        cin >> m;
        a.push_back(m);
    }
    for (int i = 0 ; i < a.size() ; i++) {
        for (int j = i+1 ; j < a.size() ;j++) {
            if (a[i] > a[j]) swap(a[i],a[j]) ;
        }
    }
    for (int i = 0 ; i < a.size() ; i++) {
        cout << setprecision(2) << fixed << a[i] << " " ;
    }
    