// Problem: Rank Transform of an Array
// URL: https://leetcode.com/problems/rank-transform-of-an-array
// Difficulty: Easy
// Language: C++
// Date: 2026-07-12

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;
        unordered_map<int,int> hmap;
        sort(arr2.begin(), arr2.end());
        int rank  = 1;
        for(int i : arr2){
            if(hmap.find(i) == hmap.end()){
                hmap[i] = rank;
                rank++;
            }
        }
        for(auto &i : arr){
            i = hmap[i];
        }
        return arr;
    }
};