#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int i = 0 ;
    do {
        i++;
        n /= 10;
    }
    while (n != 0) ;
    
    cout << i ;
}