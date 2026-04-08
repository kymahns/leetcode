// Problem: Asteroid Collision
// URL: https://leetcode.com/problems/asteroid-collision
// Difficulty: Medium
// Language: C++
// Date: 2026-04-08

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(auto i : asteroids){
            int temp = abs(i);
            bool survived = true;
            
            if(i < 0){
                while(!st.empty() && st.top() > 0){
                    if(st.top() < temp){
                        st.pop();
                    }
                    else if(st.top() > temp){
                        survived = false;
                        break;
                    }
                    else{
                        st.pop();
                        survived = false;
                        break;
                    }
                }
            }
            
            if(survived){
                st.push(i);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};