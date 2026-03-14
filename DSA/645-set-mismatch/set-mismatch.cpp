class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<bool> mask(n,false);
        vector<int> ans;
        for(auto i : nums){
            if(mask[i] == false){
                mask[i] = true;
            }
            else{
                ans.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(mask[i] == false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};