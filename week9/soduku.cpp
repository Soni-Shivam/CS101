#include<iostream>
#include<vector>
using namespace std;
bool check_uniqueness(vector<int> myarr) {
    vector<int> unique_num = {1,2,3,4,5,6,7,8,9};
    vector<int> deleted_num = {};
    for(auto element : myarr) {
        bool found = false;
        for(int i =0; i < unique_num.size(); i++) {
            if (element == unique_num.at(i)) {
                unique_num.erase(unique_num.begin()+i);
                deleted_num.push_back(element);
                found = true;
            }
        } 
        if (found ==false) break;
    }
    if (unique_num.size() == 0) return true;
    else return false;
}

vector<vector<int>> flattenAll3x3(vector<vector<int>> grid) {
    vector<vector<int>> extracted_grid = {};
    for(int j =0; j < grid.size(); j+= 3) {
        for(int i=0; i < grid.size(); i+= 3) {
            vector<int> elements_vector = {};
            for(int y=0; y<3; y++) {
                for(int x=0; x<3; x++) elements_vector.push_back(grid.at(i+x).at(j+y));
            }
            extracted_grid.push_back(elements_vector);
        }
    }
    return extracted_grid;
}

bool check_all(vector<vector<int>> grid){
    // check uniqueness of rows
    for(auto row : grid) {
        if (!check_uniqueness(row)) return false;
    }
    // check uniqueness of columns
    for(int i =0; i < grid.size(); i++) {
        vector<int> column = {};
        for(int j =0; j < grid.size(); j++) {
            column.push_back(grid.at(j).at(i));
        }
        if (!check_uniqueness(column)) return false;
    }
    // check uniqueness for 3x3 submatrix
    for (auto element : flattenAll3x3(grid)) {
        if(!check_uniqueness(element)) return false;
        }
    return true;
}
int main() {
    vector<vector<int>> grid = {};
    for(int i =0; i < 9; i++) {
        grid.push_back({});
        for(int j=0; j< 9; j++) {
            int element;
            cin >> element;
            grid.at(i).push_back(element);
        }
    }
    cout << ((check_all(grid)) ? "True" : "False") << endl;  
    return 0;
} 