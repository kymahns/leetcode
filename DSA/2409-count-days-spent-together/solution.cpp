// Problem: Count Days Spent Together
// URL: https://leetcode.com/problems/count-days-spent-together
// Difficulty: Easy
// Language: C++
// Date: 2026-10-25

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        if(min(leaveAlice, leaveBob) < max(arriveAlice, arriveBob)) return 0;
        return days(min(leaveAlice, leaveBob)) - days(max(arriveAlice, arriveBob)) 
        + 1;
        
    }
    int days(string date){
        int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = (date[0]-'0') *10 + (date[1] - '0'); 
        int day = (date[3]-'0') * 10 + (date[4] - '0');
        int total = 0;
        for(int i = 1; i < month; i++){
            total += months[i];
        }
        total += day;
        return total;
    }
};