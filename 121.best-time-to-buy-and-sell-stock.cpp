#include <vector>
#include <iostream>

using namespace std;
/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        int diff = 0;
        size_t len = prices.size();

        for (int i = 0; i + 1 < len; ++i){
            if ((minPrice > prices[i]) && (i == 0)){
                minPrice = prices[i];
                for(int j = i + 1; j < len; ++j){
                    diff = prices[j] - prices[i];
                    diff>maxProfit? maxProfit = diff : maxProfit;
                }
            }
        }
        return maxProfit;
    }
};
// @lc code=end

