#include<iostream>
#include<vector>
using namespace std;

void generateSubsets(vector<char> arr, int i, int index, vector<char> scratch){
    if (index ==arr.size()) {
        for(char c: scratch) {
            cout << c;
        }
        cout << endl;
    }
    else {
        scratch.push_back(arr[i]);
        generateSubsets(arr, i+1, index+1, scratch);
        scratch.pop_back();
        generateSubsets(arr, i+1, index+1, scratch);
    }
}


int main() {
    vector<char> arr = {'a','b','c','d'};
    generateSubsets(arr, 0,0,{});
    return 0;
}