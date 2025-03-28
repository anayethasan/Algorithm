#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int dp[50];
        Solution()
        {
            memset(dp, -1, sizeof(dp));
        }
        int fib(int n) {
            if(n < 2)
                return n;
    
            if(dp[n] != -1)
                return dp[n];
            dp[n] =  fib(n - 1) + fib(n - 2);
            return dp[n];       
        }
    };