// Problem: Max Number of K-Sum Pairs
// URL: https://leetcode.com/problems/max-number-of-k-sum-pairs
// Difficulty: Medium
// Language: C++
// Date: 2026-04-04

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int count = 0;
        for(auto num : nums){
            if(map[k - num]>0){
                map[k-num] --;
                count++;
            }
            else{
                map[num] ++;
            }
        }
        return count;
    }
};