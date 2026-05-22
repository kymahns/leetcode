// Problem: Rotate String
// URL: https://leetcode.com/problems/rotate-string
// Difficulty: Easy
// Language: C++
// Date: 2026-05-22

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        int i = 0, j = 0, g = 0, n = s.length();
        while(i < n){
            if(s[j] == goal[g]){
                j = (j+1) % n;
                g++;
            }
            else{
                i++;
                j=i;
                g=0;
            }
            if(g == goal.length()){
                return true;
            }
        }
        return false;
    }
};