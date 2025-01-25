#include<simplecpp>

main_program{
    int f0 = 0, f1 = 1;
    int fn;
    int n;
    cin >> n;
    repeat(n) {
        cout << f0 << " ";
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
}