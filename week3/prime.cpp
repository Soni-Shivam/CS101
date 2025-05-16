#include<simplecpp>

main_program {
    int n;
    bool sus = false;
    cin >> n;
    for (int i=0; i<=n/6+1; i++) {
            if ((n == (6*i+1)) || (n == (6*i-1))) {
                sus = true;
                break;
            }
        }
    if (n == 2 || n ==3) ( sus = true);
    sus ? (cout << "sus" << endl) : (cout << "not sus" << endl);
}