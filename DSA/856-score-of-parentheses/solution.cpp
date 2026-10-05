// Problem: Score of Parentheses
// URL: https://leetcode.com/problems/score-of-parentheses
// Difficulty: Medium
// Language: C++
// Date: 2026-10-05

class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0, depth = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                ++depth;
            } else {
                --depth;
                if (s[i - 1] == '(') {
                    score += 1 << depth;
                }
            }
        }
        return score;
    }
};