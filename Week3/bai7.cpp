#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s) ;
    int countNumber = 0, countAlphabet = 0, countOther = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            countAlphabet++ ;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            countNumber ++ ;
        }
        else countOther++ ;
    }
    cout << countAlphabet << " " << countNumber << " " << countOther ;
}