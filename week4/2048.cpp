#include<simplecpp>
bool isValidTile(int n) {
    if (n==0) return false;
    for(int i =1; (pow(2,i-1)<=n); i++) {
        if (((n << i)&(n))!=0) return false; 
    }
    return true;
}

main_program {
    int t;
    unsigned int n;
    cin >> t;
    for (int repeat_times = t; repeat_times >0; repeat_times--) {
        cin >> n;
        cout << ((isValidTile(n)) ? "yes" : "no") << endl;
    }
}