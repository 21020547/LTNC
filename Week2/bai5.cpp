#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x_size = 2*n+1;
    for (int i = 1 ; i <= x_size ; i++) {
        for (int j = 1 ; j <= x_size ; j++ ) {
            if (i == j || i+j == x_size+1) cout << "*" << " ";
            else cout << "." << " ";
        }
        cout << endl;
    }
}