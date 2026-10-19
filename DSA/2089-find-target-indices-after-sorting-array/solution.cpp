// Problem: Find Target Indices After Sorting Array
// URL: https://leetcode.com/problems/find-target-indices-after-sorting-array
// Difficulty: Easy
// Language: C++
// Date: 2026-10-19

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                result.push_back(i);
            }
        }
        return result;
    }
};