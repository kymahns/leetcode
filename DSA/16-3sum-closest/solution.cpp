// Problem: 3Sum Closest
// URL: https://leetcode.com/problems/3sum-closest
// Difficulty: Medium
// Language: C++
// Date: 2026-04-16

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int minim = nums[1] + nums[2] + nums[3];
        for(int i = 0; i < nums.size() - 2; i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(target - sum) < abs(target - minim)){
                    minim = sum;
                }
                if(sum == target){
                    return target;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return minim;
    }
};