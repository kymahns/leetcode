// Problem: Weighted Word Mapping
// URL: https://leetcode.com/problems/weighted-word-mapping
// Difficulty: Easy
// Language: C++
// Date: 2026-06-13

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        int total = 0;
        for(auto s: words){
            total = 0;
            for(auto i : s){
                total = total + weights[(i - 'a')];
            }
            ans += char('z' - (total % 26));
        }
        return ans;
    }
};