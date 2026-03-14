class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<string> op;
        vector<int> nums;
        for(string i:tokens){
            if(i == "+" || i == "-" || i == "*" || i =="/"){
                int num1,num2;
                num1 = nums.back();
                nums.pop_back();
                num2 = nums.back();
                nums.pop_back();
                if(i=="+"){
                    nums.push_back(num1+num2);
                }
                else if(i == "-"){
                    nums.push_back(num2-num1);
                }
                else if(i == "*"){
                    nums.push_back(num2*num1);
                }
                else if(i == "/"){
                    nums.push_back(num2/num1);
                }
            }
            else{
                int number = 0;
                bool positive = true;
                for(char j:i){
                    if(j == '-'){
                        positive = false;
                        continue;
                    }
                    number = number*10 + (int(j)-48);
                }
                if(positive == false){
                    number = number*(-1);
                }
                nums.push_back(number);
            }
        }
        return nums[0];
    }
};