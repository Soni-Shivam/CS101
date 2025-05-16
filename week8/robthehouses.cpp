#include<iostream>
using namespace std;

int main() {
    int numOfHouses = 10;
/*     int houses[numOfHouses] = {2,7,9,3,1};*/    
    int houses[numOfHouses] = {3,2,5,10,7,8,6,4,12,15};
    /* cin >> numOfHouses;
    for(int i=0; i<numOfHouses; i++){
        cin >> houses[i];
    } */
    int maxSum =0;
    int temp = ((numOfHouses%2) ? (numOfHouses+1)/2 : numOfHouses/2);
    for(int breaks = 0; breaks<2; breaks++){
        for(int breakpoint=0; breakpoint<numOfHouses; breakpoint++){
            int sum=0;
            cout << "breaks: " << breaks << " breakpoint: " << breakpoint << " Adding: ";
            for(int i=0;i<temp;i++){
                if (i>=breakpoint) {
                    if ((breaks + 2*i) >= numOfHouses) continue;
                    sum+=houses[breaks +2*i];
                    cout << houses[breaks+2*i] << " ";
                }
                else { 
                    if ((2*i) > numOfHouses) continue;
                    sum+=houses[2*i];
                    cout << houses[2*i] << " ";
                }  
            }
            cout << endl;
            if (sum > maxSum) {
                maxSum = sum;
                cout << "This is the new max sum:" << maxSum << endl;
            }        
        }
    }
    cout << maxSum;
    return 0;
}