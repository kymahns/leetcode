// Problem: Create Grid With Exactly One Path
// URL: https://leetcode.com/problems/create-grid-with-exactly-one-path
// Difficulty: Easy
// Language: C++
// Date: 2026-10-29

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> result;
        string line = "";
        for(int i = 0; i < n ; i++){
            line += '.';
        }
        result.push_back(line);
        for(int i = 0; i < m-1; i++){
            line = "";
            for(int j = 0; j < n-1; j++){
                line += '#';
            }
            result.push_back(line + '.');
        }
        return result;
    }
};