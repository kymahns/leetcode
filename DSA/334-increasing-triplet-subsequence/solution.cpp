// Problem: Increasing Triplet Subsequence
// URL: https://leetcode.com/problems/increasing-triplet-subsequence
// Difficulty: Medium
// Language: C++
// Date: 2026-03-28

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= first){
                first = nums[i];
            }
            else if(nums[i] <= second){
                second = nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};