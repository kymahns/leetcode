// Problem: Sum of Squares of Special Elements 
// URL: https://leetcode.com/problems/sum-of-squares-of-special-elements
// Difficulty: Easy
// Language: C++
// Date: 2026-10-12

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(n%(i+1)==0){
                sum += nums[i]*nums[i];
            }
        }
        return sum;
    }
};