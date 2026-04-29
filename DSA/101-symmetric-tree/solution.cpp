// Problem: Symmetric Tree
// URL: https://leetcode.com/problems/symmetric-tree
// Difficulty: Easy
// Language: C++
// Date: 2026-04-29

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
    if (!left && !right) return true;
    if (!left || !right) return false;
    return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
}

};
