#include<iostream>
#include<string>
using namespace std;

void permute(string& str, int l, int r) {
    if(l == r)
    cout << str << endl;
    //Base case
    else {
    for(int i = l; i <=r; i++) {
    swap(str[l], str[i]);
    permute(str, l+1, r);
    swap(str[l], str[i]);
    }
    }
    }

int main() {
    string str = "meow";
    permute(str, 0, 3);
    return 0;
}