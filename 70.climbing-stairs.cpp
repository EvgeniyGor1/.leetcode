#include <bits/stdc++.h>
using namespace std;

int Count(int n){
    if (n == 1) {
        return 1;
    }else if(n == 2){
        return 2;
    }
    return Count(n-1) + Count(n-2);
}



/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int ans = 1;
        int x = 1;
        int y = 1;
        for (int i = 1; i < n; ++i){
            ans = x + y;
            y = x;
            x = ans;
        }
        return ans;
    }

};
// @lc code=end

