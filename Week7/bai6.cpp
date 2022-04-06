#include <algorithm>
#include <vector>
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    vector<int> v ;
    int* p = new int [lenArr1 + lenArr2] ;
    for (int i = 0 ; i < lenArr1 ; i++) {
        v.push_back(firstArr[i]) ;
    }
    for (int i = 0 ; i < lenArr2 ; i++) {
       v.push_back(secondArr[i]) ;
    }
    if (firstArr[0] < firstArr[lenArr1-1]) {
        sort(v.begin() , v.end()) ;
    }
    else sort(v.begin(), v.end() , greater<int>()) ;
    for (int i = 0 ; i < v.size() ; i++) {
        p[i] = v[i] ;
    }
    return p ;
}