string pigLatin(string s) {
    if (s[0] == 'u' || s[0] == 'e' || s[0] == 'o' || s[0] == 'a' || s[0] == 'i')
    {
        s = s + "way" ;
    }
    else 
    {
        char c = s[0] ;
        for (int i = 0 ; i < s.size()-1 ; i++) {
            s[i] = s[i+1];
        }
        s[s.size()-1] = c ;
        s = s + "ay";
    }
    return s;
}