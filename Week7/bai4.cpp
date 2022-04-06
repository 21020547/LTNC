int* getPointerToArray(int n) {
    int* p = new int[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> p[i] ;
    }
    return p ;
}