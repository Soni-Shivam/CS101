#include<iostream>
using namespace std;

int main() {
    unsigned int n, r=0;
    cin >> n;

    //invert the number and compare
    for(int q= n; q>0;q/=10) {
        r = r*10 + q%10;
    }
    

    if(n == r) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}