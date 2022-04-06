void reverse(char *s) {
    int n = strlen(s) ;
    string t = "" ; 
    for (int i = 0 ; i < n ; i++) {
        t += s[i] ; 
    }
    for (int i = 0 ; i <  n ; i ++) {
        s[i] = t[n-i-1] ;
    }
}