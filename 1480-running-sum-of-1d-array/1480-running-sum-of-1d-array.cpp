class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> newVector;
        int sum  = 0;
        for(auto &value : nums){
            sum = sum + value;
            newVector.push_back(sum);
        }
        return newVector;
    }
};