#include<simplecpp>

main_program {
    int largest_digit =0, smallest_digit=9, number, last_digit, rounded;
    cin >> number;
    while(number >=1) {
        rounded = floor(number/10);
        last_digit = number - rounded*10;
        if (last_digit > largest_digit) {
            largest_digit = last_digit;
        }
        if (last_digit < smallest_digit) {
            smallest_digit = last_digit;
        }
        number = rounded;
    }
    cout << largest_digit-smallest_digit << endl;

}