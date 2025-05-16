#include<iostream>
#include<vector>
using namespace std;

void swap(char& a, char&b) {
    char temp = a;
    a = b;
    b = temp;
}

void permute(vector<char> arr, int l, int index) {
    if (index == arr.size()-1) {
        for(char c: arr) cout << c;
        cout << endl;
    }
    for(int i=l; i < arr.size(); i++){
        swap(arr[i], arr[l]);
        permute(arr, l+1, index+1);
        swap(arr[i], arr[l]);
    }
}

int main() {
    vector<char> arr = {'a','b','c','d'};
    permute(arr, 0, 0);
    return 0;
}



class Solution {
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> perms = {};
            solve(nums, 0, 0, perms);
            return perms;
        }
        void swap(int& a, int&b) {
            int temp = a;
            a = b;
            b = temp;
        }
    
        void solve(vector<int> arr, int l, int index, vector<vector<int>>& store) {
            if (index == arr.size()-1) {
                store.push_back(arr);
            }
            for(int i=l; i < arr.size(); i++){
                swap(arr[i], arr[l]);
                solve(arr, l+1, index+1);
                swap(arr[i], arr[l]);
            }
        }
    };