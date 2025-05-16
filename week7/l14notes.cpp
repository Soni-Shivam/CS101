/* sizeof is an operator not a function */

#include<iostream>
#include<string>
using namespace std;

int main() {
    /* int arr[] = {1,2,3};
    for(int i =0; i<4; i++) {
        cout << "the element is " << arr[i]<< endl; // notice the array size is 3 but we are trying to access the 4th element
        // the 4th element is not in the array so it will print some garbage value
    } */
    char nice[] = "hello";
    string hi = "hello";
    for(int i =0; i<10; i++) {
        cout << "the element for char array is " << (int)nice[i]<< endl;
        cout << "the element for string arr is " << (int)hi[i]<< endl; // notice the array size is 3 but we are trying to access the 4th element
        // notice the array size is 3 but we are trying to access the 4th element
        // the 4th element is not in the array so it will print some garbage value
    }
    
    return 0;
}
