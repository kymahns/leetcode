// Problem: String to Integer (atoi)
// URL: https://leetcode.com/problems/string-to-integer-atoi
// Difficulty: Medium
// Language: C++
// Date: 2026-03-18

class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        int sign = 1;
        int i = 0;
        int n = s.length();
        if(s.length() == 0){
            return 0;
        }
        while(i<n && s[i] == ' '){
            i++;
        }
        if(i == n){
            return 0;
        }
        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        while(i<n && s[i] >= '0' && s[i]<='9'){
            result = result * 10 + s[i] - '0'; 
            if(sign * result >= INT_MAX){
                return INT_MAX;
            }
            else if(sign * result <= INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return result * sign;
    }
};