#include <iostream>
#include <cctype>
using namespace std;
void checkUserName(string s) 
{
    int count = 0 ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (isalnum(s[i])) count++; 
    }
    if (count < s.size() || (s.size() > 15 || s.size() < 6) || (s[0] >= '0' && s[0] <= '9') ) 
    {
        cout << "Invalid username." ;
    }
    else cout << "Valid username." ;
}
int main() {
    string s;
    getline(cin,s);
    checkUserName(s) ;
}