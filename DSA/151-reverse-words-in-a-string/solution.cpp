// Problem: Reverse Words in a String
// URL: https://leetcode.com/problems/reverse-words-in-a-string
// Difficulty: Medium
// Language: C++
// Date: 2026-03-22

class Solution {
public:
    string reverseWords(string s) {
        string wordR = "";
        string ans = "";
        for(int i = s.length() - 1; i >=0 ;i--){
            if(s[i] != ' '){
                wordR += s[i];
            }
            else{
                reverse(wordR.begin(),wordR.end());
                ans = ans + wordR;
                if(wordR != ""){
                    ans = ans + " ";
                }
                wordR = "";
            }
        }
        if(wordR.length() != 0 && wordR != " "){
            reverse(wordR.begin(),wordR.end());
            ans = ans + wordR;
        }
        int j = ans.length() - 1;
        while(ans[j] == ' '){
            ans.pop_back();
            j--;
        }
        return ans;
    }
};