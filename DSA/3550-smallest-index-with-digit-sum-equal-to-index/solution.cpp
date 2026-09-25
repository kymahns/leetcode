// Problem: Smallest Index With Digit Sum Equal to Index
// URL: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index
// Difficulty: Easy
// Language: C++
// Date: 2026-09-25

class Solution {
public:
    int sumofDigits(int n){
        int sum = 0;
        do{
            sum+=n%10;
            n/=10;
        }while(n);
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i == sumofDigits(nums[i])){
                return i;
            }
        }
        return -1;
    }
};