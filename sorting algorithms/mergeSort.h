#include<iostream>

using namespace std;

/*
mergeSort(arr, l, r)
    if l < r
        mid = (l+r)/2
        mergeSort(arr, l, mid)
        mergeSort(arr, mid+1, r)
        merge(arr, l, mid, r)
*/