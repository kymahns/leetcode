// Problem: Furthest Point From Origin
// URL: https://leetcode.com/problems/furthest-point-from-origin
// Difficulty: Easy
// Language: C++
// Date: 2026-05-30

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, u = 0;
        for(auto i : moves){
            if(i == 'L'){
                l++;
            }
            else if(i == 'R'){
                r++;
            }
            else{
                u++;
            }
        }
        if(l > r){
            return l-r+u;
        }
        else{
            return r-l+u;
        }
    }
};