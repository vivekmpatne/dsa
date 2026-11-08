class Solution {
public:

    // this for Method 2 ( top - down )
    int climbStairs(int n, unordered_map<int, int>& memo) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (memo.find(n) == memo.end()) {  // not found then 
            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
        }
        return memo[n];
    }

    int climbStairs(int n) {
        // method 1 => Recursion but its give TLE TC = > 2^n ( can go  n <= 25) , and here 1<= n <= 45

        // Method 2 : Memorization ( Top - Down)
        unordered_map<int, int> memo;
        return climbStairs(n, memo);
    }
};