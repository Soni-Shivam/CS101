#include<simplecpp>

main_program {
    int n, divisor = 10;
    cin >> n;
    bool kaprekar = false;
    int square = n*n;

    while(divisor <= square/10) {
        divisor *= 10;
        int left = square/divisor;
        int right = square%divisor;
        if (right >0 && left + right == n) {
            kaprekar = true;
            break;
        }
    }
    kaprekar ? (cout << "1" << endl) : (cout << "0" << endl);
}