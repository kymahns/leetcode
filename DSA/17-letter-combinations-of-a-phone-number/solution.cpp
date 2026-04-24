// Problem: Letter Combinations of a Phone Number
// URL: https://leetcode.com/problems/letter-combinations-of-a-phone-number
// Difficulty: Medium
// Language: C++
// Date: 2026-04-24

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        
        if (digits.empty()) {
            return res;
        }
        
        unordered_map<char, string> digitToLetters = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        backtrack(digits, 0, "", res, digitToLetters);
        
        return res;        
    }

    void backtrack(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters) {
        if (idx == digits.length()) {
            res.push_back(comb);
            return;
        }
        
        string letters = digitToLetters.at(digits[idx]);
        for (char letter : letters) {
            backtrack(digits, idx + 1, comb + letter, res, digitToLetters);
        }
    }    
};