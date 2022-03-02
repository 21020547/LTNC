#include <iostream>
using namespace std;
int main() {
    int count = 0;
    string s;
    getline(cin,s);
    for (int i = 0 ; i < s.size() ;i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    cout << count +1 ;
    return 0;
}