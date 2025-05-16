#include<simplecpp>

main_program {
    unsigned int a, p;
    unsigned int res = 1;
    cin >> a >> p;
    for(int i =0; p!=0 ; p/=2) {
        if (p%2) { // odd
            res *= a;
        }
        a *= a;
    }
    cout << res << endl;
}