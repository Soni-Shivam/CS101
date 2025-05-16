#include <iostream>
using namespace std;

long long binpow(long long num, int pow) {
    if (pow<0) 
        return 1/binpow(num, -pow);
    if (pow ==0) return 1;
    long long res = binpow(num, pow / 2);
    if (pow % 2 == 0) {
        return res * res;
    } else {
        return res * res * num;
    }
}

int main() {
    long long num, exponent;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << binpow(num, exponent) << endl;
    return 0;
}