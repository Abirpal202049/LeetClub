class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> finalvector;
        for (int i = 0; i < nums.size() * 2; i++)
        {
            if(finalvector.size() < nums.size())
                finalvector.push_back(nums[i]);
            else{
                int k = i % nums.size();
                finalvector.push_back(nums[k]);
            }
        }
        return finalvector;
    }
};