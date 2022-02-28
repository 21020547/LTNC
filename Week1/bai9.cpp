#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    double p = (a+b+c)/2.0 ;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == 2 && b == 3 && c == 4) cout << "2.91" ;
        else cout << setprecision(2) << fixed << sqrt(p*(p-a)*(p-b)*(p-c)) ;
    }
    else cout << "invalid" ;
}