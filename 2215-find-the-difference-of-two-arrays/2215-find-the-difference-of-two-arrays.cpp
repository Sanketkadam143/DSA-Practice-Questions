class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>map1,map2;
      vector<int>ans1,ans2;
      for(auto& nums:nums1)map1[nums]++;
      for(auto& nums:nums2)map2[nums]++;
      for(auto& nums:map1){
          if(map2.count(nums.first) == 0)ans1.push_back(nums.first);
      }
      for(auto& nums:map2){
          if(map1.count(nums.first) == 0)ans2.push_back(nums.first);
      }
     return {ans1,ans2};    
  }
};