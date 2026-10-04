// Problem: Maximum Nesting Depth of the Parentheses
// URL: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses
// Difficulty: Easy
// Language: C++
// Date: 2026-10-04

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxdepth = 0;
        int depth = 0;
        for(char ch : s){
            if(ch == '('){
                st.push(ch);
                depth ++;
                maxdepth = max(maxdepth,depth);
            }
            else if(ch == ')'){
                st.pop();
                depth --;
            }
        }
        return maxdepth;
    }
};