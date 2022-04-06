bool check(char s) {
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')) return true;
    else return false ;
}
void rFilter(char *s) {
    for (int i = strlen(s)-1 ; i >=0 ; i--) {
        if (check(s[i]) == false )
        {
            s[i] = '_' ;
        }
        if (check(s[i]) == true) break ;
    }
    
}