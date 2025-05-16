#include <iostream>
using namespace std;
int& myF (int& x) {
    int z = x + 1;
    return z;
}
int main() {
    int a = 5;
    cout << ((a==5) ? "true" : "false") << endl;
    return 0;
}