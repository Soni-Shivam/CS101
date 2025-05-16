#include<iostream>
using namespace std;

int main() {
    char letter;
    bool upper = false, lower = false, digit = false, special = false;
    bool isValid = false;
    for(int i =0; i <8; i++) {
        cin >> letter;
        if (letter >= 'A' && letter <= 'Z') upper = true;
        else if (letter >= 'a' && letter <= 'z') lower = true;
        else if (letter >= '0' && letter <= '9') digit = true;
        else special = true;
    }
    if (upper && lower && digit && !special) isValid = true;
    cout << (isValid ? "khul jaa sim sim" : "tai tai fish") << endl;
    return 0;
}