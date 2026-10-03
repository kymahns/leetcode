// Problem: Longest Valid Parentheses
// URL: https://leetcode.com/problems/longest-valid-parentheses
// Difficulty: Hard
// Language: C++
// Date: 2026-10-03

class Solution {
public:
    int longestValidParentheses(auto& s) {
        int res = 0;
        vector<int> stack = {-1};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                stack.push_back(i);
            else {
                stack.pop_back();
                
                if (stack.empty())
                    stack.push_back(i);
                else
                    res = max(res, i - stack.back());
            }
        }
        return res;
    }
};