// Problem: Count the Number of Special Characters II
// URL: https://leetcode.com/problems/count-the-number-of-special-characters-ii
// Difficulty: Medium
// Language: C++
// Date: 2026-05-27

class Solution {
public:
    int numberOfSpecialChars(string word) {
        const int INF = 1e9;
        int lastLower[26], firstUpper[26];
        for (int i = 0; i < 26; i++) {
            lastLower[i] = -1;
            firstUpper[i] = INF;
        }
        for (int i = 0; i < (int)word.size(); i++) {
            char c = word[i];
            if ('a' <= c && c <= 'z') {
                int idx = c - 'a';
                lastLower[idx] = i;
            } else {
                int idx = c - 'A';
                firstUpper[idx] = min(firstUpper[idx], i);
            }
        }
        int count = 0;
        for (int k = 0; k < 26; k++) {
            if (lastLower[k] != -1 && firstUpper[k] != INF &&
                lastLower[k] < firstUpper[k]) {
                count++;
            }
        }
        return count;
    }
};