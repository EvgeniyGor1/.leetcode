/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums){
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> hashSet;
            for(int j=i+1;j<n;j++){
                int thirdNumber=-(nums[i]+nums[j]);
                if(hashSet.find(thirdNumber)!=hashSet.end()){
                    vector<int> temp={nums[i],nums[j],thirdNumber};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[j]);
            }
        }
        vector<vector<int>> res(st.begin(),st.end());
        return res;
    }
};
// @lc code=end

