// Problem: Count Good Nodes in Binary Tree
// URL: https://leetcode.com/problems/count-good-nodes-in-binary-tree
// Difficulty: Medium
// Language: C++
// Date: 2026-04-11

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
class Solution {
public:
    int dfs(TreeNode* root, int curMax){
        if(!root){
            return 0;
        }
        int count = 0;
        if(root->val >= curMax){
            count = 1;
            curMax = root->val;
        }
        count += dfs(root->left,curMax);
        count += dfs(root->right,curMax);
        return count;
    }
    int goodNodes(TreeNode* root){
        return dfs(root, root->val);
    }
};