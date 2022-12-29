class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter=0,min=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)continue;
            min=nums[i];
            for(int j=i;j<nums.size();j++){
                nums[j]-=min;
            }
        counter++;
        }
        return counter;
    }
};