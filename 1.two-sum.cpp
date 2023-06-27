#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, size_t> numMap;
        vector<int> res = {NULL,NULL};

        multimap<int, size_t>::iterator it = numMap.begin();
        auto it2 = numMap.end();

        for (int i = 0; i < nums.size(); ++i) {
            numMap.insert(make_pair(nums[i], i));
        }

        for (it = numMap.begin(); it != numMap.end(); ++it) {

            auto it2 = find_if(next(it), numMap.end(), [&target, &it](pair<int, size_t> x) {return target - x.first == it->first; });
            if (it2 != numMap.end()) {
                res[0] = int(it->second);
                res[1] = int(it2->second);
                return res;
            }
        }
        return { -1, -1 };
    }
};
// @lc code=end

