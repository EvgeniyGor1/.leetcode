#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1);
        
        ans[0] = 0;
                
        for(int i = 1; i<=n; ++i)
            ans[i] = ans[i/2] + i%2;
        
        return ans;
    }
};
// @lc code=end

