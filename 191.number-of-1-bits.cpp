#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 31; i >= 0; --i){
            if (n >> i & 1 == 1){
                 ++count;
            }
        }
        return count;
    }
};
// @lc code=end

