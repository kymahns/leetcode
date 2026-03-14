class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int x = 0, y = n;
        for(int i = 0; i < 2*n; i=i+2){
            ans[i] = nums.at(x++);
            ans[i+1] = nums.at(y++);
        }
        return ans;
    }
};