// Problem: Remove Nth Node From End of List
// URL: https://leetcode.com/problems/remove-nth-node-from-end-of-list
// Difficulty: Medium
// Language: C++
// Date: 2026-04-27

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* curr = dummy->next;
        int count = 0;
        while (curr) { count++; curr = curr->next; }

        int pos = 1;
        curr = dummy;
        while (curr->next != nullptr) {
            if ((count - pos + 1) == n) {
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
            pos++;
        }
        return dummy->next;
    }
};