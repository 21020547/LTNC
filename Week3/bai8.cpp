#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    vector<int> position ;
    for (int i = 0 ; i < s.size() ; i++) {
        if ((s[i] == 'Z'|| s[i] == 'z') && (s[i+1] == 'u' || s[i+1] == 'U')&& (s[i+2] == 'e' || s[i+2] == 'E') && (s[i+3] == 's'|| s[i+3] == 'S')) {
            position.push_back(i) ;
            break;
        }    
    }
    for (int i = 0 ; i < position.size() ; i++) {
        swap(s[position[i]+1],s[position[i]+2]) ;
    }
    cout << s;
}