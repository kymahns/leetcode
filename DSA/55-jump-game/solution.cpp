// Problem: Jump Game
// URL: https://leetcode.com/problems/jump-game
// Difficulty: Medium
// Language: C++
// Date: 2026-05-07

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }

        return goal == 0;        
    }
};