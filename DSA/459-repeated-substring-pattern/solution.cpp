// Problem: Repeated Substring Pattern
// URL: https://leetcode.com/problems/repeated-substring-pattern
// Difficulty: Easy
// Language: C++
// Date: 2025-04-11

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> lps(n, 0); // Longest Prefix Suffix table

        // Build the LPS table
        for (int i = 1, len = 0; i < n; ) {
            if (s[i] == s[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }

        int len = lps[n - 1]; // Length of the longest proper prefix which is also suffix
        return (len > 0 && n % (n - len) == 0);
    }
};
