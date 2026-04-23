// Problem: Keys and Rooms
// URL: https://leetcode.com/problems/keys-and-rooms
// Difficulty: Medium
// Language: C++
// Date: 2026-04-23

class Solution {
public:
    void bfs(int src,vector<vector<int>>& rooms, vector<bool> & vis)
    {
        queue<int> q;
        q.push(src);
        vis[src] = true;
        while(!q.empty())
        {
            int par = q.front();
            q.pop();
            for(int child : rooms[par])
            {
                if(!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> vis(1005,0);
        int n = rooms.size();
        bfs(0,rooms,vis);
        for(int i=0;i<n;i++)
            if(vis[i]==false)
                return false;
        return true;
    }
};