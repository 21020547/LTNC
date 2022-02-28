#include <bits/stdc++.h>
const int MAX_N = 1000;
using namespace std;
int main(){
    double sum = 0, n, m;
    cin >> n;
    vector <double> A, B;
    for (int i = 0 ; i < n ; i++) {
        cin >> m;
        A.push_back(m);
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> m;
        B.push_back(m);
    }
    for (int i = 0 ; i < n; i++) {
        sum += A[i] * B[i];
    }
    cout << setprecision(2) << fixed << sum;
}
