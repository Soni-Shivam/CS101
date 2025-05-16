#include <iostream>
#include<simplecpp>
using namespace std;
int main(){
    float f = 6.022e23;
    float r = f +1 -f; // f+1 = f since 1 is negligible so f +1 -f === f-f so = 0
    cout << r << endl;

    int t = 10;
    t = t -2.4; // whereas yahan ans is 7 obvio
    cout << t << endl;
    t =10;
    repeat(2){t=t-1.2;} // t is int so har baar round off ho jayega.. here t goes to 8.8 to 8 so next 6.8 to 6 hence ans is 6

    cout << (5+2)/5*1.1 << endl; // ans is not 1.54 but 1.1 here 7/5 is evaluatede first so 1.4 rounds to 1 next 1*1.1
    cout << 1.1*(5+2)/5 << endl; // here ans is 1.54 it becomes float before evaluation of ratio
    return 0;
}