class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>map;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(auto& num:nums[i])map[num]++;
        }
        for(auto& it:map){
            if(it.second==nums.size())ans.push_back(it.first);
        }
        return ans;
    }
};