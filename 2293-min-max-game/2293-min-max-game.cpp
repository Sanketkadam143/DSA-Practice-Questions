class Solution {
public:
    int minMaxGame(vector<int>& nums) {
       int n=nums.size();
       if(n==1)return nums[0];
       vector<int>newNums(n/2);
        
        for(int i=0;i<n/2;i++){
            if(i%2==0){
                newNums[i]=min(nums[2 * i], nums[2 * i + 1]);
            }else{
                newNums[i]=max(nums[2 * i], nums[2 * i + 1]);
            }
        }
        int result=minMaxGame(newNums);
      
      return result;
    }
};