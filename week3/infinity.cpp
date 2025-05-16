#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float nanValue = (-1.0/0); // nan aayega
    if (nanValue == nanValue) cout << "Equal" << endl;
    else cout << "not equal"<< endl;
    cout << nanValue<< endl;
    return 0;

}

// nanValue is not readable so comaring itself is false