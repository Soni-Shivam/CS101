#include <iostream>
using namespace std;
void main() {
    cout << 0.001F << endl; // output 0.001
    float f1 = 2e7;
    float f2 = 0.07;
    double d = 1e-20;
    cout << f1 + 1 -f1 << " "<< 1-f1+f1 << " "<< endl; 
    cout << 1 + f2 -1 << " " << 1- 1 +f2<<endl;
    cout << 1 +d -1 << " " << 1 -1 +d <<endl;


    
}