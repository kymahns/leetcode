// Problem: Leaf-Similar Trees
// URL: https://leetcode.com/problems/leaf-similar-trees
// Difficulty: Easy
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
    void dfs(TreeNode* root, vector<int> &ans){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            ans.push_back(root->val);
            return;
        }
        dfs(root->left, ans);
        dfs(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1,leaf2;
        dfs(root1,leaf1);
        dfs(root2,leaf2);
        return leaf1 == leaf2;
    }
};