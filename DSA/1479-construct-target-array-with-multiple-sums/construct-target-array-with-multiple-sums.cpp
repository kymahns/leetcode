class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long,vector<long long>> pq;
        int n = target.size();
        long long sum = 0;
        for(auto i : target){
            pq.push(i);
            sum+=i;
        }
        while(true){
            long long maxVal = pq.top();
            pq.pop();
            long long rest = sum -  maxVal;
            if(rest == 1 || maxVal == 1){
                return true;
            }
            if(rest == 0 || rest >= maxVal){
                return false;
            }
            long long prev = maxVal % rest;
            if(prev == 0 || prev == maxVal){
                return false;
            }
            pq.push(prev);
            sum = rest + prev;
        }
    }
};