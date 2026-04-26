// Problem: Valid Sudoku
// URL: https://leetcode.com/problems/valid-sudoku
// Difficulty: Medium
// Language: C++
// Date: 2026-04-26

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int freq[10] = {0};
        for(int i = 0; i< 9; i++){
            memset(freq,0,sizeof(freq));
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                freq[board[i][j] - '0']++;
                if(freq[board[i][j] - '0'] > 1){
                    return false;
                }
            }
        }
        for(int i = 0; i< 9; i++){
            memset(freq,0,sizeof(freq));
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                freq[board[j][i] - '0']++;
                if(freq[board[j][i] - '0'] > 1){
                    return false;
                }
            }
        }
        for(int i = 0; i< 3; i++){
            for(int j = 0; j < 3; j++){
            memset(freq,0,sizeof(freq));
                for(int k = 3 * i; k < 3 * (i+1); k++){
                    for(int l = 3 * j; l < 3* (j+1); l++){
                        if(board[k][l] == '.') continue;
                        freq[board[k][l] - '0']++;
                        if(freq[board[k][l] - '0'] > 1){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};