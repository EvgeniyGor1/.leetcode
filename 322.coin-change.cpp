#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        vector<int> dp(amount+1,INT_MAX-1);
        dp[0]=0;
        for(int i=0;i<amount+1;i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]) dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
        if(dp[amount]<INT_MAX-1) return dp[amount];
        return -1;
    }
};
// @lc code=end