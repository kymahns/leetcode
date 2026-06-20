// Problem: Find the Highest Altitude
// URL: https://leetcode.com/problems/find-the-highest-altitude
// Difficulty: Easy
// Language: C++
// Date: 2026-06-20

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curHeight = 0;
        int maxHeight = 0;
        for(int i = 0; i < gain.size(); i++){
            curHeight = curHeight + gain[i];
            maxHeight = max(maxHeight,curHeight);
        }
        return maxHeight;
    }
};