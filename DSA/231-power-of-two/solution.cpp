// Problem: Power of Two
// URL: https://leetcode.com/problems/power-of-two
// Difficulty: Easy
// Language: C++
// Date: 2026-09-22

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};