#include <string>
#include <iostream>
using namespace std;

void genButterfly(int x) {
    int n = x*2 +1;
    string result = "";
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (j==i || j==n-i-1) {
                result += "*";
            } else {
                result += " ";
            }
        };
        result += " ";
    }
    cout << "*" << result << "*\n" << endl;
}

int main() {
    genButterfly(5);
}