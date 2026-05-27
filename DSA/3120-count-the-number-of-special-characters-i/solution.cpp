// Problem: Count the Number of Special Characters I
// URL: https://leetcode.com/problems/count-the-number-of-special-characters-i
// Difficulty: Easy
// Language: C++
// Date: 2026-05-27

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> hmap;
        int count = 0;
        for(auto i : word){
            if(i >= 'a' && i<='z'){
                if(hmap.find(toupper(i)) != hmap.end() && hmap[i] == 0){
                    count++;
                }
                hmap[i]++;
            }
            else{
                if(hmap.find(tolower(i)) != hmap.end() && hmap[i] == 0){
                    count++;
                }
                hmap[i]++;
            }
        }
        return count;
    }
};