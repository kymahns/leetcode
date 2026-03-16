class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int n1,n2;
            n1 = pq.top();
            pq.pop();
            n2 = pq.top();
            pq.pop();
            if(n2 != n1){
                pq.push(n1-n2);
            }
        }
        if(pq.empty()){
            return 0;
        }
        else{
            return pq.top();
        }
    }
};