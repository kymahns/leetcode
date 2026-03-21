// Problem: Detect Capital
// URL: https://leetcode.com/problems/detect-capital
// Difficulty: Easy
// Language: C++
// Date: 2026-03-21

class Solution {
public:
    bool detectCapitalUse(string word) {
        int i = 0;
        int n = word.length();
        while(word[i] >= 'A' && word[i] <= 'Z' && i < n){
            i++;
        }
        if(i==1 || i == 0){
            while(word[i] >= 'a' && word[i] <= 'z' && i < n){
                i++;
            }
        }    
        if(i == n){
            return true;
        }
        return false;
    }
};