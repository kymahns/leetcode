// Problem: Find the Prefix Common Array of Two Arrays
// URL: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays
// Difficulty: Medium
// Language: C++
// Date: 2026-05-20

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        unordered_map<int,int> hmap;
        int count = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] == B[i]){
                count++;
            }
            else{
                hmap[A[i]]++;
                hmap[B[i]]++;
                if(hmap[A[i]] == 2 && hmap[B[i]] == 2){
                    count +=2;
                }
                else if(hmap[A[i]] == 2 || hmap[B[i]] == 2){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};