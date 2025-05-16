// Brian Kernighan’s Algorithm
#include<iostream>
using namespace std;

int countOnes(int num) {
	int count =0;
	while(num) {
		num &= (num-1);
		count++;
	}
	return count;
}

int main() {
	int num;
	cin >> num;
	cout <<	countOnes(num) << endl;
	return 0;
}
