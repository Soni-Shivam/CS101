#include<iostream>
using namespace std;

void findCombinations(int a[], int n, int i, int sum, int currentSum, int &count) {
    if (currentSum > sum || i >= n) {
        return;
    }
    
    if (sum == currentSum) {
        ++count;
        return;
    }

    for (int x = i; x < n; ++x) {
        findCombinations(a, n, x, sum, currentSum + a[x], count);
    }
}

int main() {
    int n, sum;
    cin >> n >> sum;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;

    findCombinations(a, n, 0, sum, 0, count);
    cout << count << '\n';  
}