// Problem: Two Furthest Houses With Different Colors
// URL: https://leetcode.com/problems/two-furthest-houses-with-different-colors
// Difficulty: Easy
// Language: C++
// Date: 2026-05-24

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int count = 0;
        for(int i = 0; i < colors.size(); i++){
            int j = colors.size() - 1;
            if(j-i < count){
                break;
            }
            while(j>i){
                if(colors[i] != colors[j]){
                    count = max(count, j-i);
                }
                j--;
            }
        }
        return count;
    }
};