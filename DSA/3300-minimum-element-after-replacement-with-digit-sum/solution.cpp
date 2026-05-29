// Problem: Minimum Element After Replacement With Digit Sum
// URL: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum
// Difficulty: Easy
// Language: C++
// Date: 2026-05-29

class Solution {
public:
    int replace(int num){
        int sum = 0;
        do{
            sum+=num%10;
            num/=10;
        }while(num);
        return sum;
    }
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(auto i : nums){
            ans = min(ans, replace(i));
        }
        return ans;
    }
};