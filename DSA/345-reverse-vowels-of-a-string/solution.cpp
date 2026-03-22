// Problem: Reverse Vowels of a String
// URL: https://leetcode.com/problems/reverse-vowels-of-a-string
// Difficulty: Easy
// Language: C++
// Date: 2026-03-22

class Solution {
public:
    bool isVowel (char ch){
        if(toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U'){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        while(i < j){
            if(isVowel(s[j]) == true && isVowel(s[i]) == true){
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
                i++;
                j--;
                continue;
            }
            if(isVowel(s[j]) != true){
                j--;
            }
            if(isVowel(s[i]) != true){
                i++;
            }
        }
        return s;
    }
};