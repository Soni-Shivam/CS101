#include<iostream>
using namespace std;

void generateCombination(int m, int n) {
    char letter;
    for(int i =0; i < m; i++) {
        cin >> letter;
        if (i==0) cout << letter;
    }
    cout << letter;
    for(int i =0; i < n; i++) {
        cin >> letter;
        if (i==0) cout << letter;
    }
    cout << letter;
}

int main() {
    int m,n;
    cin >> m>>n;
    generateCombination(m,n);
    return 0;
}