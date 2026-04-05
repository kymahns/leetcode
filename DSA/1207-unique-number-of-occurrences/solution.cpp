// Problem: Unique Number of Occurrences
// URL: https://leetcode.com/problems/unique-number-of-occurrences
// Difficulty: Easy
// Language: C++
// Date: 2026-04-05

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_map<int,int> freq2;
        for(auto i : arr){
            freq[i]++;
        }
        for(auto it : freq){
            if(freq2[it.second] == 0){
                freq2[it.second]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};