class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> smaller(n,0);
        for(int i=0; i<n; i++){
            for(auto j:nums){
                if(j<nums[i]){
                    smaller[i]++;
                }
            }
        }
        return smaller;
    }
};