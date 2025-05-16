#include<iostream>
using namespace std;
struct rational {
    int num;
    int den;
};

int findGCD(int a, int b) {
    if (a < 0) a = -1*a;
    if (b < 0) b = -1*b;
    int num = (a>b) ? b : a;
    while (num > 1) {
        if (a % num == 0 && b % num == 0)
            break;
        num--;
    }
    return num;
}

rational simplify(rational r) {
    int gcd = findGCD(r.num, r.den);
    if (r.den < 0) {
        r.num = -1*r.num;
        r.den = -1*r.den;
    }
    return {r.num/gcd, r.den/gcd};
}

rational addRat(rational r1, rational r2) {
    rational ans = {r1.num*r2.den + r2.num*r1.den, r1.den*r2.den};
    return simplify(ans);
}

rational subRat(rational r1, rational r2) {
    rational r3 = {-1*r2.num, r2.den};
    return addRat(r1, r3);
}

rational multRat(rational r1, rational r2) {
    rational ans = {r1.num*r2.num, r1.den*r2.den};
    return simplify(ans);
}
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << addRat({a,b},{c,d}).num << " " << addRat({a,b},{c,d}).den << endl;
    cout << subRat({a,b},{c,d}).num << " " << subRat({a,b},{c,d}).den << endl;
    cout << multRat({a,b},{c,d}).num << " " << multRat({a,b},{c,d}).den << endl;
    return 0;
}