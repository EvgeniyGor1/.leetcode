#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size() == 0) return 0;
        
        std::array<int, 128> arr = {};
        int beg = 0, largestChar = 0;

        for (int end = 0; end < s.size(); ++end) {
            largestChar = max(largestChar, ++arr[s[end]]);

            if (end - beg >= k + largestChar ){
                --arr[s[beg++]];
            }
        }

        return s.length() - beg;
    }
};
// @lc code=end

