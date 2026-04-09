// Problem: Number of Recent Calls
// URL: https://leetcode.com/problems/number-of-recent-calls
// Difficulty: Easy
// Language: C++
// Date: 2026-04-09

class RecentCounter {
public:
    vector<int> log;
    int start;
    RecentCounter() {
        start = 0;
    }
    
    int ping(int t) {
        log.push_back(t);
        while(log[start] < t - 3000){
            start++;
        }
        return log.size() - start;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */