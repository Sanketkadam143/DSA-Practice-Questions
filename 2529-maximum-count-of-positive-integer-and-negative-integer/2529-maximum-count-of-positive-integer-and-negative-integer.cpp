class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int counter=0,zeros=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                break;
            }
            else if(nums[i]<0){
                 counter++;
             }else{
                zeros++;
            }
        }     
        return max(counter,n-zeros-counter);
    }
};