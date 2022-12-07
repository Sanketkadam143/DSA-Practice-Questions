class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0,inc=0;
        for(int i=1;i<nums.size();i++){
            inc=0;
            if(nums[i-1]>=nums[i]){
                inc=nums[i-1]-nums[i]+1;
                nums[i]+=inc;
                ans+=inc;
            }
        }
        return ans;
    }
};