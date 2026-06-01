// Problem: Minimum Cost of Buying Candies With Discount
// URL: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount
// Difficulty: Easy
// Language: C++
// Date: 2026-06-01

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        vector<int> freq(101, 0);
        for(int c : cost) {
            freq[c]++;
        }
        int total = 0;
        int count = 0;
        for(int i = 100; i >= 1; i--) {
            while(freq[i] > 0) {
                if(count == 2) {
                    count = 0;
                } else {
                    total += i;
                    count++;
                }
                freq[i]--;
            }
        }
        return total;
    }
};