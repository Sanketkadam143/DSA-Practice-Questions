class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        ans=(nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
        
        return ans;
    }
};