// Problem: Find Minimum in Rotated Sorted Array
// URL: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array
// Difficulty: Medium
// Language: C++
// Date: 2026-05-15

class Solution {
public:
    int findMin(vector<int>& nums) {
        int right = nums.size()-1, left = 0;
        while(left < right){
            int mid = (left + right) / 2;
            if(nums[right] > nums[mid]){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return nums[left];
    }
};