// Problem: Check if Array Is Sorted and Rotated
// URL: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated
// Difficulty: Easy
// Language: C++
// Date: 2026-05-23

class Solution {
public:
    bool check(vector<int>& nums) {
        int smaller = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                smaller++;
            }
        }
        if(smaller > 1){
            return false;
        }
        else if(smaller == 1){
            if(nums[0] >= nums[nums.size()-1]){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
};