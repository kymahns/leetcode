// Problem: Merge Strings Alternately
// URL: https://leetcode.com/problems/merge-strings-alternately
// Difficulty: Easy
// Language: C++
// Date: 2025-04-11

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int n1 = word1.length(), n2 = word2.length();
        string s = "";
        while(i < n1 && i < n2){
            s = s + word1[i] + word2[i++];
        }
        if(i == n1)
            while(i < n2){
                s+= word2[i++];
            }
        else
            while(i < n1){
                s+=word1[i++];
            }
        return s;
    }
};