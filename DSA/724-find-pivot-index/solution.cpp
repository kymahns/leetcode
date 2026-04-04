// Problem: Find Pivot Index
// URL: https://leetcode.com/problems/find-pivot-index
// Difficulty: Easy
// Language: C++
// Date: 2026-04-04

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pref(nums.size()+1,0);
        for(int i = 0; i<nums.size(); i++){
            pref[i+1] = pref[i] + nums[i];
        }
        for(int i = 1; i<pref.size();i++){
            int left = pref[i-1];
            int right = pref[nums.size()] - pref[i-1] - nums[i-1];
            if(right == left)
                return i-1;
        }
        return -1;
    }
};