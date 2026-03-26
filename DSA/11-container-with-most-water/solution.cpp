// Problem: Container With Most Water
// URL: https://leetcode.com/problems/container-with-most-water
// Difficulty: Medium
// Language: C++
// Date: 2026-03-26

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i = 0, j = height.size()-1;
        while(i<j){
            int area = min(height[i],height[j]) * (j-i);
            maxArea = max(maxArea,area);
            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxArea;
    }
};