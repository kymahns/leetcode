// Problem: Pascal's Triangle
// URL: https://leetcode.com/problems/pascals-triangle
// Difficulty: Easy
// Language: C++
// Date: 2026-05-11

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.reserve(numRows);
        ans.push_back({1});
        if (numRows == 1) return ans;
        ans.push_back({1, 1});
        if (numRows == 2) return ans;
        for (int layer = 2; layer < numRows; ++layer) {
            const vector<int>& prev = ans.back();
            vector<int> curr;
            curr.reserve(layer + 1);
            curr.push_back(1);
            for (int i = 1; i < (int)prev.size(); ++i) {
                curr.push_back(prev[i - 1] + prev[i]);
            }
            curr.push_back(1);
            ans.push_back(std::move(curr));
        }

        return ans;
    }
};