#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, i =1;
    cin >> x ;
    double num = x, fac = i;
    double sum = 1, oldSum = 0;
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        sum += num/fac;
        num *= x;
        fac *= i+1;
        i++;
    }
    cout<< setprecision(4) << fixed  << sum;
}