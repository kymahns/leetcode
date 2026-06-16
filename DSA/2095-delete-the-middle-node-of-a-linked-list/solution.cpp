// Problem: Delete the Middle Node of a Linked List
// URL: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list
// Difficulty: Medium
// Language: C++
// Date: 2026-06-16

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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next){
            return nullptr;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = slow;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head;
    }
};