// Problem: Masking Personal Information
// URL: https://leetcode.com/problems/masking-personal-information
// Difficulty: Medium
// Language: C++
// Date: 2026-04-24

class Solution {
public:
    string maskPII(string s) {
        if(s.empty()){
            return "";
        }
        string result = "";
        if((s[0] > 'z' || s[0] < 'a')&& (s[0] > 'Z' || s[0] < 'A')){
            string temp = "";
            for(auto i : s){
                if(i >= '0' && i <= '9'){
                    temp+=i;
                }
            }
            int n = temp.length();
            for(int i = 1; i <= n; i++){
                if(i <= 4){
                    result += temp[n-i];
                }
                else{
                    result += '*';
                }
                if(i == 4 || i == 7 || (i == 10 && n > 10)){
                    result += '-';
                }
            }
            if(temp.size() > 10){
                result += '+';
            }
            reverse(result.begin(),result.end());
            return result;
        }
        else{
            int i = 0;
            while(s[i]!= '@'){
                i++;
            }
            result += tolower(s[0]);
            result += "*****";
            result += tolower(s[i-1]);
            result += '@';
            i+=2;
            while(i <= s.length()){
                if(s[i-1] != '.'){
                    result += tolower(s[i-1]);
                }
                else{
                    result += '.';
                }
                i++;
            }
            return result;
        }
    }
};