class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> newVec;
        for(auto &value : nums){
            newVec.push_back(nums[value]);
        }
        return newVec;
    }
};