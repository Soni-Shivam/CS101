#include<iostream>
#include<vector>
using namespace std;

void subsetizer(vector<int>& set, vector<vector<int>>& subsets, vector<int>& current, int index) {
    subsets.push_back(current);
    for(int i = index; i < set.size(); i++) {
        current.push_back(set[i]);
        subsetizer(set, subsets, current, i + 1);
        current.pop_back();
    }
}

int main() {
    int n, num;
    vector<int> set, current;
    vector<vector<int>> subsets;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> num, set.push_back(num);
    subsetizer(set, subsets, current, 0);
    for(auto subset : subsets) {
        for(int element : subset) cout << element << " ";
        cout << endl;
    }
    return 0;
}