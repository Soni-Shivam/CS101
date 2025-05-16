#include<simplecpp>
using namespace std;

bool calculateNetIncome(int x, int& y) {
	if ((y & (1 << (x-1))) == 0) return false;
	else return true;
}

int main() { 
	int x,y;
	cin >> x >> y;
	cout << ((calculateNetIncome(x,y)) ? "Taxed" : "Not Taxed") << endl;
	if (calculateNetIncome(x,y)) (y = (y ^ (1 << (x-1))));
	cout << "Salary: " << y << endl;


}
