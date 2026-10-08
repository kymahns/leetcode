// Problem: Minimum Add to Make Parentheses Valid
// URL: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid
// Difficulty: Medium
// Language: C++
// Date: 2026-10-08

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int add = 0;
        for(char ch : s){
            if(ch == '('){
                open++;
            }
            else if(open > 0){
                open--;
            }
            else{
                add++;
            }
        }
        return add+open;
    }
};