#include<iostream>

using namespace std;

//tail recursion
//inefficient
int expo(int n, int k) {
    if(k==0) return 1;
    return (n*expo(n, k-1));
}

//make it more efficient
// logaritmic time complexity
int expoEfficient(int n, int k) {
    if(k%2 ==0) {
        int temp = expoEfficient(n, k/2);
        return temp*temp;
    } else {
        return n*expoEfficient(n, k-1);
    }
}

int main() {
    int n,k;
    cin >> n >>k;
    cout << expo(n,k);
}