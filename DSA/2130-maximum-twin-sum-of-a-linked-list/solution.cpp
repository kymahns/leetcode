// Problem: Maximum Twin Sum of a Linked List
// URL: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list
// Difficulty: Medium
// Language: C++
// Date: 2026-04-10

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* cur = head;
        int count = 1;
        while(cur->next!= nullptr){
            count++;
            cur = cur->next;
        }
        cur = head;
        for(int i = 0; i < count/2; i++){
            st.push(cur->val);
            cur = cur->next;
        }
        int maxSum = 0;
        for(int i = 0; i < count/2; i++){
            maxSum = max(maxSum, cur->val + st.top());
            st.pop();
            cur = cur->next;
        }
        return maxSum;
    }
};