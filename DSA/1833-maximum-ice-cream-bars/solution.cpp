// Problem: Maximum Ice Cream Bars
// URL: https://leetcode.com/problems/maximum-ice-cream-bars
// Difficulty: Medium
// Language: C++
// Date: 2026-06-21

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);
        for(auto i : costs){
            freq[i]++;
        }
        int answer = 0;
        for(int i = 1; i <= 100000; i++){
            if(freq[i] == 0){
                continue;
            }
            int canBuy = min(freq[i], coins/i);
            answer += canBuy;
            coins -= canBuy * i;
            if(coins < i) continue;
        }
        return answer;
    }
};