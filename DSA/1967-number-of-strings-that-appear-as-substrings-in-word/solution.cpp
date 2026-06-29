// Problem: Number of Strings That Appear as Substrings in Word
// URL: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word
// Difficulty: Easy
// Language: C++
// Date: 2026-06-29

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for (string &s : patterns) {
            if (word.find(s) != string::npos)
                ans++;
        }
        return ans;
    }
};