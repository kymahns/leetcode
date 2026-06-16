// Problem: Process String with Special Operations I
// URL: https://leetcode.com/problems/process-string-with-special-operations-i
// Difficulty: Medium
// Language: C++
// Date: 2026-06-16

class Solution {
public:
    string processStr(string s) {
        string cur = "";
        for(auto i : s){
            if(i == '%'){
                reverse(cur.begin(), cur.end());
            }
            else if(i == '#'){
                cur = cur + cur;
            }
            else if(i == '*'){
                    if(cur.length()!=0){
                        cur.pop_back();
                    }
                }
            else{
                cur += i;
            }
        }
        return cur;
    }
};