#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000;
int main () {
    int n;
    cin >> n;
    double a[MAX_N];
    for (int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n-1 ; i>=0 ; i--) {
        cout << fixed << setprecision(2) << a[i] << " ";
    } 
}