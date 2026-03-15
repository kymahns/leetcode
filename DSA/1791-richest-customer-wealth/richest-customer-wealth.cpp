class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for(auto& i : accounts){
            int sum = 0;
            for(auto &j : i){
                sum+=j;
            }
            if(richest < sum){
                richest = sum;
            }
        }
        return richest;
    }
};