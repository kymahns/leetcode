// Problem: Removing Stars From a String
// URL: https://leetcode.com/problems/removing-stars-from-a-string
// Difficulty: Medium
// Language: C++
// Date: 2026-04-07

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans = "";
        for(auto ch : s){
            if(ch == '*'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};