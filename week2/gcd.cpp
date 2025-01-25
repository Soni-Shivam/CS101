#include<simplecpp>

main_program {
    int max, a,b, gcd;
    cin >> a >> b;
    if (a>b) max = a;
    else max = b;
    for (int i = 1; i <= max; i++) {
        if (a%i == 0 && b%i == 0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
}
