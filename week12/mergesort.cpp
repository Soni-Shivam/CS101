#include<iostream>
using namespace std;

void merge(int arr[],  int s, int e) {
    int mainArrayIndex=s;
    int mid = s + (e-s)/2; // prevent overflow
    int index1 = 0, index2 =0;
    int len1 = mid-s+1, len2 = e- mid;
    int *first = new int[len1];
    int *second = new int[len2];
    for(int i=0; i<len1; i++) first[i] = arr[mainArrayIndex++];
    for(int i=0; i<len2; i++) second[i] = arr[mainArrayIndex++];
    mainArrayIndex=s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1]<second[index2]) arr[mainArrayIndex++] = first[index1++];
        else arr[mainArrayIndex++] = second[index2++];
    }
    while(index1 < len1) arr[mainArrayIndex++] = first[index1++];
    while(index2 < len2) arr[mainArrayIndex++] = second[index2++];
}

void mergeSort(int *arr, int s, int e) {
    if (s>=e) return;
    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);

}
int main() {
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i < n; i++) cin >> arr[i] ;
    mergeSort(arr, 0, n-1);
    for(int i=0; i < n; i++) cout << arr[i] << " " ;
    return 0;
}