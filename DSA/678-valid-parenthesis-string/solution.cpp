// Problem: Valid Parenthesis String
// URL: https://leetcode.com/problems/valid-parenthesis-string
// Difficulty: Medium
// Language: C++
// Date: 2026-10-04

class Solution {
public:
    bool checkValidString(string s) {
        int mins = 0, maxs = 0;

        for (char c : s) {
            if (c == '(') {
                mins++;
                maxs++;
            } else if (c == ')') {
                mins--;
                maxs--;
            } else {
                mins--;
                maxs++;
            }
            if (maxs < 0) return false; 
            mins = max(mins, 0); 
        }
        return mins == 0; 
    }
};