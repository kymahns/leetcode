// Problem: Valid Parentheses
// URL: https://leetcode.com/problems/valid-parentheses
// Difficulty: Easy
// Language: C++
// Date: 2026-10-01

class Solution {
public:
    bool isValid(string &str) {
        if (str.size() % 2) return 0;

        int i = 0;

        for (char &c : str)
            if ((c & 3) != 1)
                str[i++] = c;
            else if (i == 0 || ((c - str[--i] + 1) >> 1) != 1)
                return 0;

        return i == 0;
    }
};