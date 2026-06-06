// Problem: Left and Right Sum Differences
// URL: https://leetcode.com/problems/left-and-right-sum-differences
// Difficulty: Easy
// Language: C++
// Date: 2026-06-06

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int curSum = 0;
        int totalSum = 0;
        for(auto i : nums){
            totalSum += i;
        }
        for(auto i : nums){
            ans.push_back(abs(totalSum - i - curSum));
            curSum+=i;
            totalSum-=i;
        }
        return ans;
    }
};