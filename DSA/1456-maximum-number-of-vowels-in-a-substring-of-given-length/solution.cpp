// Problem: Maximum Number of Vowels in a Substring of Given Length
// URL: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length
// Difficulty: Medium
// Language: C++
// Date: 2026-04-02

class Solution {
public:
    int maxVowels(string s, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
                sum++;
            }
        }
        int maxSum = sum;
        for (int i = k; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
                sum++;
            }
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i'|| s[i-k] == 'o' || s[i-k] == 'u'){
                sum--;
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};