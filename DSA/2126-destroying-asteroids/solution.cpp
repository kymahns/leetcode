// Problem: Destroying Asteroids
// URL: https://leetcode.com/problems/destroying-asteroids
// Difficulty: Medium
// Language: C++
// Date: 2026-05-31

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long total = mass;
        for(auto i : asteroids){
            if(total < i){
                return false;
            }
            else{
                total += i;
            }
        }
        return true;
    }
};