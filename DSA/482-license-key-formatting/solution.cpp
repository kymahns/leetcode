// Problem: License Key Formatting
// URL: https://leetcode.com/problems/license-key-formatting
// Difficulty: Easy
// Language: C++
// Date: 2026-03-21

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string word = "";
        int count = 0;
        for(auto ch : s){
            if(ch >= 'a' && ch <= 'z'){
                word.push_back((char)toupper(ch));
            }
            else if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')){
                word.push_back(ch);
            }
    
        }
        for(int i = word.length() -1; i>=0; i--){
            if(count == k){
                word.insert(i + 1,1,'-');
                count = 0;
            }
            count++;
        }
        return word;
    }
};