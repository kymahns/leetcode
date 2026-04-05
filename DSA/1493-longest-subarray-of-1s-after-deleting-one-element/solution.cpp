// Problem: Longest Subarray of 1's After Deleting One Element
// URL: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element
// Difficulty: Medium
// Language: C++
// Date: 2026-04-05

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeros = 0, res = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zeros++;
            
            while (zeros > 1) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            res = max(res, right - left);
        }
        return res;
    }
};