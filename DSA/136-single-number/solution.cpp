// Problem: Single Number
// URL: https://leetcode.com/problems/single-number
// Difficulty: Easy
// Language: C++
// Date: 2026-06-10

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hmap;
        for(auto i : nums){
            hmap[i]++;
        }
        for(auto i : hmap){
            if(i.second != 2){
                return i.first;
            }
        }
        return -1;
    }
};