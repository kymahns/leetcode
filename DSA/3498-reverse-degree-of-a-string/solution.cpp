// Problem: Reverse Degree of a String
// URL: https://leetcode.com/problems/reverse-degree-of-a-string
// Difficulty: Easy
// Language: C++
// Date: 2026-09-22

class Solution {
public:
    int reverseDegree(string s) {
        int result = 0;
        for(int i=0; i<s.length();i++){
            result+= (26-(s[i]-'a'))*(i+1);
        }
        return result;
    }
};