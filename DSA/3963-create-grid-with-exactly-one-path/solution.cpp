// Problem: Create Grid With Exactly One Path
// URL: https://leetcode.com/problems/create-grid-with-exactly-one-path
// Difficulty: Easy
// Language: C++
// Date: 2026-10-29

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n,'#'));
        for(int i = 0; i < n; i++){
            grid[0][i] = '.';
        }
        for(int i = 0; i < m; i++){
            grid[i][n-1] = '.';
        }
        return grid;
    }
};