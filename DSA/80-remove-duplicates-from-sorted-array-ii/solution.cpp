// Problem: Remove Duplicates from Sorted Array II
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
// Difficulty: Medium
// Language: C++
// Date: 2026-05-06

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;
        if (nums.size() <= 2) return nums.size();
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;       
    }
};