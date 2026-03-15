class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i = 0; i<n;i++){
            if((n-1-i) == i){
                sum += mat[i][i];
            }
            else{
                sum+= mat[i][i] + mat[i][n-i-1];
            }
        }
        return sum;
    }
};