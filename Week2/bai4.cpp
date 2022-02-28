#include <iostream>
using namespace std;
int main () {
    int total, totalLegs;
    bool check = false;
    int soGa, soCho;
    cin >> total >> totalLegs;
    for (soGa = 1 ; soGa < total ; soGa++) {
        soCho = total - soGa;
        if (soCho* 4 + soGa*2 == totalLegs) {
            check = true;
            break;
        }
    }
    if (check == true) cout << "chicken = " << soGa << ", " << "dog = " << soCho;
    else cout << "invalid" ;
}