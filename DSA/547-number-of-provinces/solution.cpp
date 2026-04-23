// Problem: Number of Provinces
// URL: https://leetcode.com/problems/number-of-provinces
// Difficulty: Medium
// Language: C++
// Date: 2026-04-23

class Solution {
public:
    void dfs(int node, vector<int>ads[],  vector<int> &vis){
        vis[node] = 1;
        for(auto it:ads[node])
        {
            if(vis[it]!=1)
            {
                dfs(it, ads, vis);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]!=1)
            {
                dfs(i, adj, vis);
                count++;
            }
        }
        return count;
    }
};