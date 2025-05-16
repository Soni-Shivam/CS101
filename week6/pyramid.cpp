#include <simplecpp>

int main() {
    int n;
    cin >> n;
    for(int i =1; i<n+1; i++) {
        for(int j=0; j<2*(n-i); j++) cout << ' ';
        for(int j=0; j<i; j++) {cout << "/__\\";}
        cout << endl;
    }
}