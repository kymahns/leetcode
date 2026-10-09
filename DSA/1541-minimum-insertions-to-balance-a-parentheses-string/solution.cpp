// Problem: Minimum Insertions to Balance a Parentheses String
// URL: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string
// Difficulty: Medium
// Language: C++
// Date: 2026-10-09

class Solution {
public:
    int minInsertions(string s) {
        int open = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') open++;
            else {
                if (i + 1 < s.size() && s[i + 1] == ')') i++;
                else ans++;
                if (open > 0) open--;
                else ans++;
            }
        }

        return ans + open * 2;
    }
};