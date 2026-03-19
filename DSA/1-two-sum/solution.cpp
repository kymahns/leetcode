// Problem: Two Sum
// URL: https://leetcode.com/problems/two-sum
// Difficulty: Easy
// Language: C++
// Date: 2026-03-19

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int i;
        for(i = 0; i< nums.size() ; i++){
            if(m.find(nums[i]) == m.end()){
                m[target - nums[i]] = i;
            }
            else{
                break;
            }
        }
        return {m[nums[i]],i};
    }
};