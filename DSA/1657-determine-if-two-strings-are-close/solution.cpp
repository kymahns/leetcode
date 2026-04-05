// Problem: Determine if Two Strings Are Close
// URL: https://leetcode.com/problems/determine-if-two-strings-are-close
// Difficulty: Medium
// Language: C++
// Date: 2026-04-05

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(auto i:word1){
            freq1[i-'a']++;
        }
        for(auto i:word2){
            freq2[i-'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0)) {
                return false;
            }
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        for(int i = 0; i < 26; i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};