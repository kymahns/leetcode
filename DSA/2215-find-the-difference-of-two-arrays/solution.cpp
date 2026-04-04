// Problem: Find the Difference of Two Arrays
// URL: https://leetcode.com/problems/find-the-difference-of-two-arrays
// Difficulty: Easy
// Language: C++
// Date: 2026-04-04

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        vector<vector<int>> ans;
        vector<int> temp;
        for(auto i : nums1){
            map1[i] ++;
        }  
        for(auto i : nums2){
            map2[i] ++;
        }  
        for(auto i : nums1){
            if(map2.find(i) == 0){
                temp.push_back(i);
                map2[i] ++;
            }
        }  
        ans.push_back(temp);
        temp = vector<int>();
        for(auto i : nums2){
            if(map1.find(i) == 0){
                temp.push_back(i);
                map1[i]++;
            }
        } 
        ans.push_back(temp);
        return ans;
    }
};