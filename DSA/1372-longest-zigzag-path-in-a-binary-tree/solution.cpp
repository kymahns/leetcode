// Problem: Longest ZigZag Path in a Binary Tree
// URL: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree
// Difficulty: Medium
// Language: C++
// Date: 2026-04-13

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 // DIRECTIONS false: LEFT 
 //            true: RIGHT
class Solution {
public:
    void dfs(TreeNode* node, bool goRight, int length, int &curMax){
        if(!node){
            return;
        }
        curMax = max(curMax, length);
        if(goRight){
            dfs(node->right,false,length+1,curMax);
            dfs(node->left,true,1,curMax);
        }
        else{
            dfs(node->left,true,length+1,curMax);
            dfs(node->right,false,1,curMax);
        }
    }
    int longestZigZag(TreeNode* root) {
        int ans = 0;
        dfs(root,true,0,ans);
        dfs(root,false,0,ans);
        return ans;
    }
};