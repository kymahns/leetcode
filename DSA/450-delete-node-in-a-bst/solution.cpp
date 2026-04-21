// Problem: Delete Node in a BST
// URL: https://leetcode.com/problems/delete-node-in-a-bst
// Difficulty: Medium
// Language: C++
// Date: 2026-04-21

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
    TreeNode* nextBest(TreeNode* node){
        TreeNode* succ = node->right;
        while(succ->left){
            succ= succ->left;
        }
        return succ;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return nullptr;
        }
        if(root->val > key){
            root ->left = deleteNode(root->left,key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);
        }
        else
        {
            if(root->left==NULL)
            {   
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            else
            {
                TreeNode* succ=nextBest(root);
                root->val=succ->val;
                root->right=deleteNode(root->right,succ->val);
                return root;
            }
        }
        return root;
    }
};