// Problem: Binary Tree Postorder Traversal
// URL: https://leetcode.com/problems/binary-tree-postorder-traversal
// Difficulty: Easy
// Language: C++
// Date: 2026-05-13

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(ans,root);
        return ans;
    }
    void postorder(vector<int> &ans, TreeNode* node){
        if(!node){
            return;
        }
        postorder(ans,node->left);
        postorder(ans,node->right);
        ans.push_back(node->val);
    }
};