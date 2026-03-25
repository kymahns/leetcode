// Problem: Move Zeroes
// URL: https://leetcode.com/problems/move-zeroes
// Difficulty: Easy
// Language: C++
// Date: 2026-03-25

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j< nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};