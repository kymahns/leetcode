// Problem: Number of Substrings Containing All Three Characters
// URL: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters
// Difficulty: Medium
// Language: C++
// Date: 2026-09-18

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0, 0, 0};
        int left = 0;
        int result = 0;

        for (int right = 0; right < s.size(); ++right) {
            ++count[s[right] - 'a'];

            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                --count[s[left] - 'a'];
                ++left;
            }

            result += left;
        }

        return result;
    }
};