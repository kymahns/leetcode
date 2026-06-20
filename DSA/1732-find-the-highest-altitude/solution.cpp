// Problem: Find the Highest Altitude
// URL: https://leetcode.com/problems/find-the-highest-altitude
// Difficulty: Easy
// Language: C++
// Date: 2026-04-04

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt(gain.size()+1,0);
        for(int i = 0; i<gain.size();i++){
            alt[i+1] = alt[i] +gain[i];
        }
        int maxim = 0;
        for(auto i : alt){
            maxim = max(maxim,i);
        }
        return maxim;
    }
};