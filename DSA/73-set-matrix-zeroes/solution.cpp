// Problem: Set Matrix Zeroes
// URL: https://leetcode.com/problems/set-matrix-zeroes
// Difficulty: Medium
// Language: C++
// Date: 2026-04-25

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> zeroh(matrix[0].size(),false);
        vector<bool> zerov(matrix.size(),false);
        for(int i = 0; i  <matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    zerov[i] = true;
                    zeroh[j] = true;
                }
            }
        }
        for(int i = 0; i < zerov.size(); i++){
            if(zerov[i] == true){
                for(int j = 0 ; j < matrix[0].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < zeroh.size(); i++){
            if(zeroh[i] == true){
                for(int j = 0 ; j < matrix.size(); j++){
                    matrix[j][i] = 0;
                }
            }
        }
    }
};