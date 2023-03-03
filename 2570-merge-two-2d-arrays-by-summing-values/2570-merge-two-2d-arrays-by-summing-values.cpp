class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>ans;
        map<int,int>map;
        
        for(auto& it:nums1)map[it[0]]+=it[1];
        for(auto& it:nums2)map[it[0]]+=it[1];
        for(auto& it:map){
            ans.push_back({it.first,it.second});
        }
      return ans;
    }
};