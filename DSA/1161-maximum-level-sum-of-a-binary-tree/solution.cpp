// Problem: Maximum Level Sum of a Binary Tree
// URL: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree
// Difficulty: Medium
// Language: C++
// Date: 2026-04-20

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
    int maxLevelSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int maxim = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        int ans = 1;
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            level++;
            for(int i = 0; i < size; i++){
                TreeNode* val = q.front();
                q.pop();
                sum += val->val;
                if(val->left)  q.push(val->left);
                if(val->right) q.push(val->right);
            }
            if(sum > maxim){
                maxim = sum;
                ans = level;
            }
        }
        return ans;
    }
};