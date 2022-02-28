#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<double> a;
    double num, sum = 0, average, newSum;
    for (int i = 0 ; i < n ;i++) {
        cin >> num;
        a.push_back(num);
        sum += a[i];
    }
    average = sum/n;
    for (int i = 0 ; i < n ; i++) {
        newSum += pow(a[i] - average,2);
    }
    cout << setprecision(2) << fixed << newSum/n ;
}