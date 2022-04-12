class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto &value : operations){
            if(value == "++X" || value == "X++")
                x = x + 1;
            else
                x = x - 1;
        }
        return x;
    }
};