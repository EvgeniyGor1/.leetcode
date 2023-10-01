#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    void solve(string ds, string digits, map<char,string> &hsh, vector<string> &ans, int cnt = 0 ){
        if(cnt == digits.size()){
            ans.push_back(ds);
            return;
        }
        string str = hsh[digits[cnt]];
        for(int i = 0; i < str.length(); i++){
            ds += str[i];
            solve(ds, digits, hsh, ans, cnt + 1);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        
        vector<string> ans;
        map<char, string> hsh;
        hsh['2'] = "abc";
        hsh['3'] = "def";
        hsh['4'] = "ghi";
        hsh['5'] = "jkl";
        hsh['6'] = "mno";
        hsh['7'] = "pqrs";
        hsh['8'] = "tuv";
        hsh['9'] = "wxyz";

        string ds = "";
        solve(ds, digits, hsh, ans);
        
        return ans; 
    }
};
// @lc code=end

