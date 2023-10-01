#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,Node*> mp;

    void help(Node * node , Node * ans){
        ans->val = node->val;
        for(auto & i : node->neighbors){

            if(mp.count(i->val)) ans->neighbors.push_back(mp[i->val]);

            else{   
                Node * temp = new Node(i->val);
                mp[i->val] = temp;
                ans->neighbors.push_back(temp);
                help(i , temp);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        Node * ans = new Node();
        mp[1] = ans;
        help(node , ans);
        return ans;
    }
};
// @lc code=end

