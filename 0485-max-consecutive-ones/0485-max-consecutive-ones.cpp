class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int ans=0,counter=0;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(*it==0){
                counter=0;
            }else{
                counter++;
            }
            ans=max(ans,counter);
        }
        return ans;
    }
};