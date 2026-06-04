// Problem: Total Waviness of Numbers in Range I
// URL: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i
// Difficulty: Medium
// Language: C++
// Date: 2026-06-04

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i = num1; i <= num2; i++){
            check(i,count);
        }
        return count;
    }
    void check(int i, int &count){
        if(i<100){
            return;
        }
        vector<int> v;
        do{
            v.push_back(i%10);
            i/=10;
        }while(i);
        for(int i = 1; i < v.size()-1;i++){
            if((v[i]>v[i+1]&&v[i]> v[i-1]) || (v[i]<v[i+1]&&v[i]< v[i-1])){
                count++;
            }
        }
    }
};