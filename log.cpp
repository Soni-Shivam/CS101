#include <math.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0;
    cin >> n;
    for(int k=1; k<=n; k++) 
    {
        sum += (1.0/k)*pow(-1, k+1);
        cout << sum << endl;
    }
    return 0;
}