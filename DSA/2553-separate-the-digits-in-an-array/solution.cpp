// Problem: Separate the Digits in an Array
// URL: https://leetcode.com/problems/separate-the-digits-in-an-array
// Difficulty: Easy
// Language: C++
// Date: 2026-05-15

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = nums.size()-1; i>=0;i--){
            do{
                ans.push_back(nums[i]%10);
                nums[i] = nums[i]/10;
            }while(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};