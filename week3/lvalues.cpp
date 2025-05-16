#include<iostream>
using namespace std;

int main() {
    int a =0 ,b=0;
    (a+=1,b+=1) = 5;
    cout << a << b;
    return 0;
}

// will the above code compile?

// A. Yes
//comma operator is used to separate two expressions. 
// the left associative comma operator evaluates the left expression first and then the right expression.
// why is b becomes 1 then is assigned value 5
// a+=1 is evaluated first and then b+=1 is evaluated