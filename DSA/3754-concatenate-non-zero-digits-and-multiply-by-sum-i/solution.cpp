// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// URL: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i
// Difficulty: Easy
// Language: C++
// Date: 2026-07-12

class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0){
            return 0;
        }
        long long result = 0;
        long long x = 0;
        long long sum = 0;
        do{
            int c = n%10;
            sum += c;
            if(c!=0){
                x = x *10 + c;
            }
            n/=10;
        }while(n);
        do{
            result = result * 10 + x%10;
            x/=10;
        }while(x);
        return result * sum;
    }
};