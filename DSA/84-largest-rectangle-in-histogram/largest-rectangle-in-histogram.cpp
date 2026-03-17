class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> PSE(n);
        vector<int> NSE(n);
        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            PSE[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        st = stack<int>();
        for(int i = n-1; i >=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            NSE[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        int maxArea = 0;
        for(int i = 0; i<n; i++){
            int area;
            area = heights[i] * (NSE[i] - PSE[i] - 1);
            if(area > maxArea){
                maxArea = area;
            }
        }
        return maxArea;
    }
};