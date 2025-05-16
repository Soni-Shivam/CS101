#include<iostream>
using namespace std;

bool check_compatibility(bool a, bool b, bool c, bool x, bool y, bool z) {
    if ( a != 1 || x != 1) return 0;
    if ( b ==  0 && y == 0) return 0;
    if ( c ==  0 && z == 0) return 0;
    return 1;
}

int main() {
    bool a,b,c,x,y,z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    cout << (check_compatibility(a,b,c,x,y,z) ? "yes" : "no") << endl;
    return 0;
}