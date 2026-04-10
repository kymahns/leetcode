// Problem: Odd Even Linked List
// URL: https://leetcode.com/problems/odd-even-linked-list
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* cur = head;
        ListNode* prev = head;
        ListNode* even = new ListNode;
        ListNode* ans = even;
        while(cur->next != nullptr && cur->next->next != nullptr){
            prev = cur;
            cur = cur->next;
            even->next = cur;
            cur = cur->next;
            prev->next = cur;
            even = even->next;
        }
        if(cur->next != nullptr){
            even->next = cur->next;
            cur->next = nullptr;
            even = even->next;
        }
        even->next = nullptr;
        cur->next = ans->next;
        return head;
    }
};