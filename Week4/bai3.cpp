#include <iomanip>
void printArrow(int n, bool left) {
    if (left == false)
    {
        for (int i = -n+1 ; i <= n-1 ; i++) {
            if (abs(i) == n-1) 
            {
                cout << setfill('*') << setw(abs(i)+1) << "*" << endl;
                continue;
            } 
            cout << setfill(' ') << setw( 2*(n-1-abs(i)) ) << " " << setfill('*') << setw(abs(i)+1) << "*" << endl;
        }
    }
    else 
    {
        for (int i = -n+1 ; i <= n-1 ; i++) {
            if (i == 0) 
            {
                cout << "*" << endl;
                continue;
            }
            cout << setfill(' ') << setw(abs(i)) << " " << setfill('*') << setw(abs(i)+1) << "*" << endl;
            
        }
    }
}