#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> setNums;
        int i = 0;

        for (; i < nums.size(); ++i){
            setNums.insert(nums[i]);
            if (setNums.size() - 1 != i){
                return true;
            }
        }

        return false;
    }
};
// @lc code=end

