#include<iostream>
using namespace std;

bool binarySearch(int arr[], int l, int r, int target) {
    if (l<=r) {
        int mid  = (l+r)/2;
        if (arr[mid] == target) return true;
        else if (arr[mid] > target) return binarySearch(arr, l, mid-1, target);
        else return binarySearch(arr, mid+1, r, target);
    }
    else return false;
}


bool binarySearch2(int arr[], int start, int size, int target) {
    if (size==1) return (arr[start] == target);
    int mid  = size/2;
    if (arr[start+mid] > target) return binarySearch2(arr, start, mid, target);
    else return binarySearch(arr, start+mid, mid, target);
}

/* int main() {
    int n;
    cin >> n;
    cout << binary(n);
} */