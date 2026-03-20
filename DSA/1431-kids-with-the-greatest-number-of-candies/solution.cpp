// Problem: Kids With the Greatest Number of Candies
// URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies
// Difficulty: Easy
// Language: C++
// Date: 2026-03-20

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxim = 0;
        vector<bool> ans;
        for(auto i : candies){
            maxim = max(maxim, i); 
        }
        for(auto i : candies){
            if(i + extraCandies >= maxim){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};