// Problem: Delete the Middle Node of a Linked List
// URL: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list
// Difficulty: Medium
// Language: C++
// Date: 2026-04-10

class Solution{
public:   
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        int count = 1;
        ListNode* cur = head;
        while (cur->next != nullptr) {
            count++;
            cur = cur->next;
        }

        cur = head;
        for (int i = 0; i < count/2 - 1; i++) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
    }
};