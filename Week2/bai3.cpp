#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    for (int i = sqrt(a) ; i <= sqrt(b) ; i++) {
        cout << i*i << " ";
    }
}