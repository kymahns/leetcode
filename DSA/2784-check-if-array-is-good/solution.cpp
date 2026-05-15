// Problem: Check if Array is Good
// URL: https://leetcode.com/problems/check-if-array-is-good
// Difficulty: Easy
// Language: C++
// Date: 2026-05-15

class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 1 && nums[0] != 1){
            return false;
        }
        if(nums[nums.size()-1] != nums.size()-1 || nums[nums.size()-1] != nums[nums.size()-2]){
            return false;
        }
        for(int i = 0; i < nums.size() - 2; i ++){
            if(nums[i] == nums[i+1] || nums[i]!= i+1){
                return false;
            }
        }
        return true;
    }
};