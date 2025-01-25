#include <iostream>

using namespace std;
int main() {
    cout << "Enter the anlge in degrees: " << endl;
    float b;
    cin >> b;
    float angle = b*3.14159265358979323846/180;
    float sum = 0;
    float lastTerm = angle;
    for(int i=1; i<1000; i = i+2) {
        sum +=  lastTerm;
        lastTerm =   lastTerm*(-1)*angle*angle/(i+1)/(i+2);
        
    }
    cout << "The value of sin(" << b << ") is " << sum << endl;
    return 0;
}
