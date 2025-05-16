#include<iostream>

int main() {
    char c = 355;
    std::cout << char(c) << std::endl;
    return 0;
}

// output 99 due to overflow 
// 355 % 256 = 99
// ASCII OF 99 IS c
// a = 97
