void swap(int* a, int* b) {
    int* tmp = new int ;
    *tmp = *a;
    *a = *b ;
    *b = *tmp ;
}