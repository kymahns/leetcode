// Problem: Maximum Total Subarray Value I
// URL: https://leetcode.com/problems/maximum-total-subarray-value-i
// Difficulty: Medium
// Language: C++
// Date: 2026-06-09

class Solution {
public:
    long long maxTotalValue(vector<int>& A, int k) {
        int gMin = A.front(), gMax = A.front();
        for (auto& n : A) {
            gMin = min(gMin, n);
            gMax = max(gMax, n);
        }
        return (long long)(gMax - gMin) * k;
    }
};