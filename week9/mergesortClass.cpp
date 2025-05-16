#include <iostream>
using namespace std;

void merge(const int X[], int Y[], int left, int right) {
	int mid = (left+right)/2, lp = left, rp = mid+1;
	for(int i=left; i <= right; i++) {
		if(lp <= mid && (rp > right || X[lp] < X[rp]))
			Y[i] = X[lp++];
		else
			Y[i] = X[rp++];
	}
}

// assumes not called with left > right
// in, out, scratch are arrays, all with left,...,right as valid indices
void sort (const int in[], int out[], int left, int right, int scratch[]) {
	if (left==right) {
		out[left] = in[left];
		return;
	}
	int mid = (left+right)/2; // left <= mid, mid+1 <= right
	sort(in,scratch,left,mid,out);   // get sorted outputs in scratch between left and mid
	sort(in,scratch,mid+1,right,out); // get sorted outputs in scratch between mid+1 and right
	merge(scratch,out,left,right);   // merge from scratch into out
}

int main() {
	const unsigned int MAXN = 300;
	int A[MAXN], B[MAXN], C[MAXN];
	unsigned int n = 0;
  cout << "How many elements in the array? (enter a value <300)\n";
  cin >> n;
  cout << "Enter " << n << " elements, one after the other:\n";
  for(int i=0; i<n; i++)
    cin >> A[i];
  
	cerr << "Sorting " << n << " numbers" << endl;
	sort(A,B,0,n-1,C);
	for(int i=0; i<n; i++)
		cout << B[i] << " ";
	cout << endl;
}
