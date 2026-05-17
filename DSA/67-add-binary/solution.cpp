// Problem: Add Binary
// URL: https://leetcode.com/problems/add-binary
// Difficulty: Easy
// Language: C++
// Date: 2025-10-19

class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            s += (sum % 2) + '0';
            carry = sum / 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
