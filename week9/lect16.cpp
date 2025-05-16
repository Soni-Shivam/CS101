#include<iostream>
using namespace std;

int main() {
    int *p;
    // // cout << p << endl;
    int i =23;
    int *q = nullptr; // special type of pointer that points to nothing
    //cout << (p =&i) << endl; // address of i
    // cout << (q) << endl; // address of null ptr is 0
    // // cout << (*q) << endl; segmentation fault
    // cout << p << endl; // address of i
    // cout << *p << endl; // value of i

    int myarr[5] = {1,2,3,4,5};
    cout << myarr<< endl; // memory address of myarr
    cout << myarr+1 << endl; // moves 4 bytes since int is 4 bytes long and prints the next memory address of next element 
    // the array is a pointer to the first element of the array
    return 0;
}