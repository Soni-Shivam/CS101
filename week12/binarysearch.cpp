#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> arr, int l, int r, int target) {
    // assuming sorted arr
    if (l <=r) {
        int midpoint = l + (r-l)/2;
        if (arr.at(midpoint) == target) return true;

        if (arr.at(midpoint) > target) {
            return binarySearch(arr, l, midpoint - 1, target);
        }
        return binarySearch(arr, midpoint+1, r, target);
    }
    return false;
}


int main() {
    vector<int> num = {1,2,3,4,5,6,7,8,9};
    cout << binarySearch(num, 0, num.size()-1, 10);
    return 0;
}