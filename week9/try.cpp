#include<iostream>
#include<vector>
using namespace std;

void myfunnc(int size, auto arr){
    for(int i=0; i< size; i++) cout << arr[i];
    return;
}
int main() {
    //myfunnc(2, {1,3});
    /* int arr[4] = {1, 3};
    char arr2[3] = {'c','e'};
    char arr4[3][20] ={"ind", "bak"};
    char arr3[] = "ce"; */
/*     myfunnc(2, arr);
 */    
/*     cout<< arr2<< endl;
    cout << arr<< endl;
    cout << arr4[1]; */

    vector<int> A = {1,4,6};
    A.resize(4, 69);
    myfunnc(4, A);

    return 0;
}