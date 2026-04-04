// Problem: Max Number of K-Sum Pairs
// URL: https://leetcode.com/problems/max-number-of-k-sum-pairs
// Difficulty: Medium
// Language: C++
// Date: 2026-04-04

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size() - 1;
        int count = 0;
        while(i<j){
            if(nums[i] + nums[j] == k){
                count++;
                i++;
                j--;
            }
            else if(nums[i] + nums[j] > k){
                j--;
            }
            else{
                i++;
            }
        }
        return count;
    }
};