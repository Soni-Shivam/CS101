#include<iostream>
using namespace std;
// always pass size of the array as well
// this is because the array is passed as a pointer
// array is ALWAYS PASSED AS REFERENCE 
// CHANEGS WILL BE REFLCTED IN THE ORIGINAL ARRAY
// so the size of the array is not known
// so we need to pass the size of the array as well
void printArray(int arr[], int n) {
    for(int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void increment(int arr[], int n) {
    for(int i =0; i<n; i++) {
        arr[i]++; // arr being a ref will be changed in the original array
    }   
}
// memory address
int main() {
    int arr[4] = {1,2,3};
    for(int i =0; i<4; i++) {
        cout << i << " M/y address " << &arr[i] << endl; 
        cout << "the element is " << arr[i];// prefixing the & in front of any var will give the memory address of that variable
    }

    int n = sizeof(arr)/sizeof(arr[0]); // each int of 4 bytes so 3*4 = 12
    // sizeof(arr) will give the size of the array in bytes
    // sizeof(arr[0]) will give the size of the first element of the array
    // so dividing the size of the array by the size of the first element of the array will give the number of elements in the array
    cout << n << endl;
    increment(arr, n);
    printArray(arr, n);
    cout << arr << endl; // this will print the memory address of the first element of the array


    // but if we have a character array then it will print the whole string
    // because the character array is always null terminated
    // so it will print the whole string and will stop at the null character
    // char str[] = "hello"; // c style string
    //char str[30] = "hello"; // allocate extra room
    //char str[6] = "hello"; // exact size
    // char str[5] = "hello"; // error
    //char str[] = "hello"; // exact size
    char str[5] = {'h', 'e', 'l', 'l', 'o'}; // might work here but is wrong// no null char
    cout << str << endl;
    cout << &str << endl;
    cout << &str[0] << endl;



    // via cin .. leading whitespaces are ignored
    // null char is added after the last char

    return 0;
}
