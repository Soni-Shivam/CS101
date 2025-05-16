#include<iostream>

using namespace std;

//tail recursion
int findLargestDigit(int n) {
    if(n<10) return n;
    return max(n%10, findLargestDigit(n/10));
}

int main() {
    int n;
    cin >> n;
    cout << findLargestDigit(n);
}