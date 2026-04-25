// Problem: Average Salary Excluding the Minimum and Maximum Salary
// URL: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary
// Difficulty: Easy
// Language: C++
// Date: 2026-04-25

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0,count=0;
        for(int i = 1; i < salary.size()-1;i++){
            sum+=salary[i];
            count++;
        }
        return sum/count;
    }
};