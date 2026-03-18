// Problem: Reverse Integer
// URL: https://leetcode.com/problems/reverse-integer
// Difficulty: Medium
// Language: C++
// Date: 2026-03-18

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x!=0){
            int c = x%10;
            if(result > INT_MAX/10 || result < INT_MIN/10){
                return 0;
            }
            result = result * 10 + c;
            x = x / 10;
        }
        return result;
    }
};