#include<iostream>
using namespace std;

int main() {

    int a ,b;
    cin >> a >> b;
    bool a_covers_b = false;
    bool b_covers_a = false;

    for (int d =2; b>1; (b%d ==0) ? b/=d :d++) {
        if (b%d ==0 && a%d !=0) {
            
        }
    }


}