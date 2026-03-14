class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(auto i: nums){
            map[i]++;
        }
        for(auto i:nums){
            int count = 0;
            for(auto  it=map.begin();it!=map.end();it++){
                if(it->first < i){
                    count+=it->second;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};