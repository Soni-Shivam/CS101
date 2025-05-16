/* Raj is eager to meet Simran, who lives at the end of a magical path of length n (with Raj being at position 0 and Simran at position n-1). At each step along the way, one can jump ahead one or more steps. An array jumps of length n tells Raj how far he can jump forward when he is at position i. Specifically, from position i < n, he can jump to any position i+j where:
    •  1 ≤ j ≤ jumps[i]
    •  i+j ≤ n 
That is, if Raj is at index i, he can jump to any index in the range i+1 to i+jumps[i], such that he won't go beyond Simran’s position.
While dreaming of the moment they will finally reunite, Raj becomes curious as to the total number of ways he can reach Simran. Your task is to write a C++ program that will help Raj find the total number of distinct paths he can take to reach Simran (a path is a sequence of indices 0 = p1 <  … < pk = n (for some k) such that for all t<k, 1 ≤ pt+1 - pt  ≤ nums[pt] ).
Requirements
    • For full credit, you need to use recursion. 
    • Note that memoization will also be required. We will NOT deduct marks just because it is not used. However, if it is not used, then, on certain inputs, the program may not terminate within the time allowed, as it will keep recalculating the same values over and over again. There will be at least one test case that will require memoization. The helper code to store the results is given after the test-cases. Copy and paste it in your code if you plan on using memoization. Hint: Refer to Lecture 16 (Slide 16) which used memoization for computing Fibonacci.  */\

#include<iostream>
#include<vector>
using namespace std;

struct Memo {
    static const int NMAX = 100;
    bool filled[NMAX] = {};
    int memo[NMAX];

    bool has(unsigned i) { return filled[i];    }
    int get(unsigned i) {return memo[i];}
    void add(unsigned i, int val) {
        memo[i] = val;
        filled[i] = true;
    }
};

int countWays(vector<int>& jumps, int index, Memo& memo) {
    if (index == jumps.size()-1) return 1;
    if (index > jumps.size()) return 0;
    if (memo.has(index))
		return memo.get(index);
    int ways = 0;
    for (int jump=1 ; jump <= jumps[index]; jump++) {
        ways += countWays(jumps, index+jump, memo);
    }
    memo.add(index,ways);
    return ways;
}

int main() {
    vector<int> jumps = {2,3,1,1,4};
    Memo memo;
    cout << countWays(jumps, 0, memo) << endl;
    return 0;
}   