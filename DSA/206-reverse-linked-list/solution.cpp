// Problem: Reverse Linked List
// URL: https://leetcode.com/problems/reverse-linked-list
// Difficulty: Easy
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = head;
        ListNode* cur = head;
        if(!head || !head->next){
            return head;
        }
        ListNode* after = head->next;
        while(after->next != nullptr){
            prev = cur;
            cur = after;
            after = after->next;
            cur->next = prev;
        }
        after->next = cur;
        head->next = nullptr;
        return after;
    }
};