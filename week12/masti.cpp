//#include <string>
#include<iostream>
#include <vector>
using namespace std;

int* copyArr(int arr[]){
    int* newArr = new int[5];
    for(int i=0; i<5; i++){
    newArr[i] = arr[i];
    }
    return newArr;
   }
   int main(){
    /* int a[5] = {4, 3, 5, 7, 9};
    int *b;
    b = copyArr(a);
    for(int i=0; i<5; i++){
    cout << b[i] << ' ' ;
    }
    a[2] = 6;
    cout << endl;
    for(int i=0; i<5; i++){
        cout << b[i] << ' ' ;
    } */


    int * ptr = new int[3];
    ptr[0] = 69;
    cout << "ptr :  " << *ptr <<endl;
    cout << "ptr +1 :  " << ptr +1<<endl;
    cout << "ptr[1] :  " << ptr[1] <<endl;
    delete[] ptr;



}