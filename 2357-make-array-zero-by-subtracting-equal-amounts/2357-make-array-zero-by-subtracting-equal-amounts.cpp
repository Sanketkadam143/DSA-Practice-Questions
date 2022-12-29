class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-sum==0)continue;           
            sum+=nums[i]-sum;          
            counter++;
        }
        return counter;
    }
};