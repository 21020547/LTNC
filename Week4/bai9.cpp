#include <bits/stdc++.h>
void sort(float a[], int size, bool isAscending) {
    for (int i = 0 ; i < size ; i++) {
        for (int j = i+1 ; j < size ; j++) {
            if (a[i] > a[j]) swap(a[j],a[i]) ;
        }
    }
    if (isAscending == false) 
    {
        for (int i = 0 ; i < size/2 ; i++) {
            swap (a[i],a[size-1-i]);
        }
    }
}