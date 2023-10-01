#include <bits/stdc++.h>


using namespace std;
/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()){return 0;}
        if (s.size() == 1){return 1;}

        int maxLen = 1;
        int curLen = 1;
        unordered_map<char, int> subString;
        subString.reserve(s.size());
        
        subString.emplace(make_pair(*s.cbegin(), 1));
        for (auto start = ++s.cbegin();start != s.cend(); ++start){
            auto current = start;
            for (; current != s.cend(); ++current){

                if (subString.find(*current) == subString.end()){
                    subString.emplace(make_pair(*current, curLen + 1));
                    ++curLen;
                }else{
                    curLen = subString[ *prev(current)];
                    maxLen < curLen ? maxLen = curLen : maxLen;
                    subString.clear();
                    curLen = 1;
                    subString.emplace(make_pair(*start, 1));
                    break;
                }   
            }   
            if (current == s.cend()){return maxLen < curLen ? curLen : maxLen;}  
        }

        return maxLen < curLen ? curLen : maxLen;
    }
};
// @lc code=end