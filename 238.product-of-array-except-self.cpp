#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (count(nums.begin(), nums.end(), 0) >= 2) {
            vector<int> ans(nums.size(), 0);
            return ans;
        }

        unordered_map<int, int> productTable;


        for (int ind = 0; ind < nums.size(); ++ind) {
            if (!productTable.count(nums[ind])) {
                int count = 0;
                productTable.emplace(make_pair(nums[ind], accumulate(nums.begin(), nums.end(), 1, [&ind, &count](int x, int y) {
                    if (ind == count) {
                        ++count;
                        return x;
                    }
                    ++count;
                    return x * y;
                })));
            }
        }



        for (int i = 0; i < nums.size(); ++i) {
            nums[i] = productTable.at(nums[i]);
        }

        return nums;
    }
};

// @lc code=end

