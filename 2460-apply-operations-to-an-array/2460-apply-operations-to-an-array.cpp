class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>result,zeros;
        for(int i=0;i<nums.size();i++){
        if(i<nums.size()-1 && nums[i]==nums[i+1]){
            nums[i]+=nums[i+1];
            nums[i+1]=0;
            i++;
        }
      }
     for(auto& num:nums){
         if(num==0)zeros.push_back(num);
           else result.push_back(num);
     }
     result.insert(result.end(),zeros.begin(),zeros.end());
     return result;
    }
};