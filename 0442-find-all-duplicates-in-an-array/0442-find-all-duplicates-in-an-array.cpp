class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>map;
        vector<int>ans;
        for(auto& it:nums)map[it]++;
        for(auto& it:map){
            if(it.second>1)ans.push_back(it.first);
        }
     return ans;
    }
};