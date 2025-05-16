#include<simplecpp>

main_program {
    int number_in_decimal, number_in_hexa, p;
    cin >> number_in_decimal;
    for (p=0 ; pow(16, p) <= number_in_decimal; p++) {};
    p -=1;
    for (int i = p; i >= 0; i--) {
        if (pow(2, i) <= number_in_decimal) {
            cout << 1;
            number_in_decimal -= pow(2, i);
        } else {
            cout << 0;
        }
    }
}