// Problem: Search Insert Position
// URL: https://leetcode.com/problems/search-insert-position
// Difficulty: Easy
// Language: C++
// Date: 2026-04-18

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target)
                return mid;

            (nums[mid] < target) ? l = mid + 1 : r = mid - 1;
        }
        return l;
    }
};