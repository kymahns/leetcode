// Problem: Maximum Number of Balloons
// URL: https://leetcode.com/problems/maximum-number-of-balloons
// Difficulty: Easy
// Language: C++
// Date: 2026-06-22

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(auto i : text){
            if(i == 'b'){
                b++;
            }
            else if(i == 'a'){
                a++;
            }
            else if(i == 'l'){
                l++;
            }
            else if(i == 'o'){
                o++;
            }
            else if(i == 'n'){
                n++;
            }
        }
        o /= 2;
        l /= 2;
        return min(min(min(min(a,b),l),o),n);
    }
};