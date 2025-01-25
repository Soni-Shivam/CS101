#include<simplecpp>

main_program{
    int n;
    cin >> n;\
    int i = 1;
    repeat(n) {
        int x = 1;
        repeat(i) {
            cout << x << " ";
            x++;
        }
        i++;
        cout << endl;
    }
}