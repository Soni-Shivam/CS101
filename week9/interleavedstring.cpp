#include<iostream>
#include<string>
bool isInterleaved(char *a, char *b, char *c){
    while(*c != '\0') {
        if(*a == '\0' && *b == '\0') return false;
        else if(*a == *c) a++;
        else if (*b == *c) b++;
        else return false;
        c++;
    }
    return (*a == '\0' && *b == '\0');
}
int main() {
    char a[101], b[101],c[101];
    std::cin >> a >> b >> c;
    std::cout << ((isInterleaved(a,b,c)) ? "true" : "false") << std::endl;
    return 0;
}