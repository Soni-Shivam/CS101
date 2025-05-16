#include<iostream>
#include<vector>
using namespace std;

void print_vector(int size, vector<int> arr) {
    for(int i=0;i<size;i++) {
        cout<< arr[i] << " ";
    }
}

void insertion_sort(int size, vector<int>& arr, int index){
    if(index==size) return;
    if(index==1) {
        if (arr[0]>arr[1]) {
            int element = arr[1];
            arr.erase(arr.begin() +1);
            arr.insert(arr.begin() , element);
        }
    }
    else {
        for(int i=0; i<index; i++) {
            if(arr[i]>arr[index]) {
                int element = arr[index];
                arr.erase(arr.begin() +index);
                arr.insert(arr.begin()+i , element);
                break;
                //print_vector(size, arr);
            }
        } 
    }
    // print_vector(size, arr);  
    // cout << endl;
    insertion_sort(size, arr, index+1); 
}

int main() {
    int n;
    cin >> n;
    vector<int> unsorted_list = {};
    for(int i=0; i<n; i++) {
        int element;
        cin>> element;
        unsorted_list.push_back(element);
    }
    //print_vector(n, unsorted_list);
/*     vector<int> sorted_list = 
 */    
    insertion_sort(n, unsorted_list, 0);
    print_vector(n, unsorted_list);
    return 0;
}