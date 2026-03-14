class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> mask(n+1,0);
        for(auto i:nums){
            mask[i]++;
        }
        for(int i = 1; i <=n; i++){
            if(mask[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};