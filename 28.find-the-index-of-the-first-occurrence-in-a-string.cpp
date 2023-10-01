#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int index = haystack.find(needle);
        return (index != -1) ? index : -1;
    }
};
// @lc code=end

