// Problem: Lemonade Change
// URL: https://leetcode.com/problems/lemonade-change
// Difficulty: Easy
// Language: C++
// Date: 2026-05-17

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        for(auto i : bills){
            if(i == 5){
                fives ++;
            }
            else if(i == 10){
                if(fives <= 0){
                    return false;
                }
                else{
                    fives --;
                    tens ++;
                }
            }
            else{
                if(fives > 0 && tens > 0){
                    fives--;
                    tens--;
                }
                else if(fives > 2){
                    fives -= 3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};