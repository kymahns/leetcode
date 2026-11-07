// Problem: Minimum Moves to Equal Array Elements III
// URL: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii
// Difficulty: Easy
// Language: C++
// Date: 2026-11-07

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = 0;
        int result = 0;
        for(auto i : nums){
            mx = max(mx,i);
        }
        for(auto i : nums){
            result += (mx - i);
        }
        return result;
    }
};