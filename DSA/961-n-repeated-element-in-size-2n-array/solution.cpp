// Problem: N-Repeated Element in Size 2N Array
// URL: https://leetcode.com/problems/n-repeated-element-in-size-2n-array
// Difficulty: Easy
// Language: C++
// Date: 2026-05-31

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> hmap;
        int i = 0;
        while(hmap.find(nums[i]) == hmap.end()){
            hmap[nums[i]]++;
            i++;
        }
        return nums[i];
    }
};