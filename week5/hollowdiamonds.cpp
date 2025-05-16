#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mid = (n+1)/2;
    for(int i=0; i<=n+1; i++) {
    	int initialSpaces = abs(mid-i);
    	int innerSpaces = n - 2*initialSpaces;
        for(int j=0; j<initialSpaces;j++) {
            cout << " ";
        }
        if ((i==0)||(i==n+1)) cout << "*"<< endl;
        else {
		cout << "*";
		for(int j=0; j<innerSpaces;j++) {
		    cout << " ";
		}
		cout << "*" << endl;
        }
    }
}
