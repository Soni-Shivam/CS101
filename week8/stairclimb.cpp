#include<iostream>
using namespace std;

int steps(int n) {
    if(n==0) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    else return steps(n-1) + steps(n-2)+ steps(n-3);
}

int main() {
    int n;
    cin >> n;
    cout << steps(n);
    return 0;
}