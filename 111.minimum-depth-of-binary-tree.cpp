#include <bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
 */


/*
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
*/

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr)return 0;
        int ans=0;
        queue<TreeNode*> q;

        q.push(root);
        while(!q.empty()){
            int size = q.size();
            ans++;

            while(size--){
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                if(node->left == NULL && node->right == NULL)
                    return ans;
            }
        }
        return ans; 
    }
};
// @lc code=end

