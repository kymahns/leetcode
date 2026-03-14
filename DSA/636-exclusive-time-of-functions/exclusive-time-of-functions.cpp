class Solution {
public:
    tuple<int,string,int> parseLog(string s){
        int n1 = 0;
        int number = 0;
        tuple<int,string,int> tup;
        bool found = false;
        string word = "";
        for(char i:s){
            if(i >= '0' && i <= '9'){
                number = number * 10 + (int(i)-48);
            }
            else if(i == ':' && found == false){
                n1 = number;
                number = 0;
                found = true;
            }
            else if(i == ':' && found == true){
                continue;
            }
            else if(i >= 'a' && i <= 'z'){
                word += i;
            }
        }
        tup = make_tuple(n1,word,number);
        return tup;
    }
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        stack<tuple<int,string,int>> stacks;
        int time = 0;
        for(auto str : logs){
            tuple<int,string,int> tup = parseLog(str);
            if(stacks.empty()){
                stacks.push(tup);
                time = get<2>(tup);
                continue;
            }
            if(get<1>(tup) == "start"){
                ans[get<0>(stacks.top())] = ans[get<0>(stacks.top())] + (get<2>(tup) - time);
                stacks.push(tup);
                time = get<2>(tup);
            }
            else if(get<1>(tup) == "end"){
                ans[get<0>(stacks.top())] = ans[get<0>(stacks.top())] + get<2>(tup) - time + 1;
                stacks.pop();
                time = get<2>(tup) + 1;
            }
        }
        return ans;
    }
};