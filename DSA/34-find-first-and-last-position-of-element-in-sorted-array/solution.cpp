// Problem: Find First and Last Position of Element in Sorted Array
// URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array
// Difficulty: Medium
// Language: C++
// Date: 2026-04-18

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int first = -1;
        if(nums.empty()){
            return {-1,-1};
        }
        while(i < nums.size() && nums[i] < target ){
            i++;
        }
        if(i>=nums.size() || nums[i] > target){
            return {-1,-1};
        }
        first = i;
        while(i < nums.size() && nums[i] == target){
            i++;
        }
        return {first,i-1};
    }
};