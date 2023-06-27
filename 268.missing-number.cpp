#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0;

            for(int i=0;i<n;++i){
                sum+=nums[i];
            }

        return n*(n+1)/2-sum;
    }
};
// @lc code=end

