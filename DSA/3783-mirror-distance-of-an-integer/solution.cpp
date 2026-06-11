// Problem: Mirror Distance of an Integer
// URL: https://leetcode.com/problems/mirror-distance-of-an-integer
// Difficulty: Easy
// Language: C++
// Date: 2026-06-11

class Solution {
public:
    int mirrorDistance(int n) {
        int r = 0;
        int cn = n;
        do{
            r = r*10 + cn%10;
            cn/=10;
        }while(cn);
        return abs(n-r);
    }
};