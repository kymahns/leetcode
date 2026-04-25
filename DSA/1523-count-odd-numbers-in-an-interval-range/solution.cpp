// Problem: Count Odd Numbers in an Interval Range
// URL: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range
// Difficulty: Easy
// Language: C++
// Date: 2026-04-25

class Solution {
public:
    int countOdds(int low, int high) {
        return (high-low)%2!=0 ? ((high-low)/2 + 1) : (high%2==0) ? (high-low)/2 : (high-low)/2 + 1;
    }
};