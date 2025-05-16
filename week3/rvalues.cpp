#include<iostream>
using namespace std;

int main() {
    int a =0 ,b=0;
    b = (a+=1, 3);
    cout << a << b;
    return 0;
}

// 1 3


// also we cannot do a++ = 5 since a++ is an rvalue and there is a temp variable made in the background to store the value of a and then we cannot do an assignment to it
// a++ = 5; // error for post increment
// ++a = 5; // will work

// also (j += 1) =2 // will not work since j+=1 is similar to post-increment
