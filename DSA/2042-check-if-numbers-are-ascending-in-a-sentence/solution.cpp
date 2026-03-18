// Problem: Check if Numbers Are Ascending in a Sentence
// URL: https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence
// Difficulty: Easy
// Language: C++
// Date: 2026-03-18

class Solution {
public:
    bool areNumbersAscending(string s) {
        int current = 0;
        int number = 0;
        for(char ch : s){
            if(ch >= '0' && ch <= '9'){
                number = number * 10 + ch - '0';
            }
            else if(number > 0){
                if(current < number){
                    current = number;
                    number = 0;
                }
                else{
                    return false;
                }
            }
        }
        if(number > 0 && number <= current){
            return false;
        }
        else{
            return true;
        }
    }
};