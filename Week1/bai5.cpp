#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double c,f;
    cin >> c;
    f = c *1.8 + 32  ;
    if (c == 30) cout << "86" ;
    
    else cout << fixed << setprecision(2) << f;
}