class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> ms1, ms2;
        for(auto &value : nums1){
            ms1.insert(value);
        }
        for(auto &value : nums2){
            ms2.insert(value);
        }
        vector<int> finalvector;
        if(ms1.size() >= ms2.size()){
            for(auto &value : ms1){
                auto itr = ms2.find(value);
                if(itr != ms2.end()){
                    finalvector.push_back(value);
                }
            }
        }else{
            for(auto &value : ms2){
                auto itr = ms1.find(value);
                if(itr != ms1.end()){
                    finalvector.push_back(value);
                }
            }
        }
        unordered_set<int> finalvalue;
        for(auto &value : finalvector){
            finalvalue.insert(value);
        }
        finalvector.clear();
        for(auto &value : finalvalue){
            finalvector.push_back(value);
        }
        return finalvector;
    }
};