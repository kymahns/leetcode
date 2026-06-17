// Problem: Number of 1 Bits
// URL: https://leetcode.com/problems/number-of-1-bits
// Difficulty: Easy
// Language: C++
// Date: 2026-06-17

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
        }
        return res;        
    }
};