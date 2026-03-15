class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool flip = false;
        int location = 0;
        for(int i = 0; i < arr.size() - 1;i ++){
            if(arr[i] == arr[i+1]){
                return false;
            }
            if(flip == false){
                if(arr[i] > arr[i+1]){
                    flip = true;
                    location = i;
                }
            }
            else{
                if(arr[i] <= arr[i+1]){
                    return false;
                }
            }
        }
        if(location == 0) return false;
        return true;
    }
};