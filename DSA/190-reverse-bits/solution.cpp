// Problem: Reverse Bits
// URL: https://leetcode.com/problems/reverse-bits
// Difficulty: Easy
// Language: C++
// Date: 2026-06-11

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res <<= 1;
            res |= (n & 1);
            n >>= 1;
        }
        return res;
    }
};