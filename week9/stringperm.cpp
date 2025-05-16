#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(char &x, char &y) {
    char temp = x;
    x = y;
    y = temp;
}

void permute(string& str, int l, int r) {
    //base case
    if (l==r) cout << str <<endl;
    else {
        for (int i=l; i<=r; i++) {
            swap(str[l], str[i]);
            permute(str, l+1,r);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str = "abcd";
    permute(str, 0, str.length()-1);
    cout << endl;


    return 0;
}