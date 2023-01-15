class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,dsum=0;
        for(auto& num:nums){
            sum+=num;
            while(num>0){
                dsum+=num%10;
                num=num/10;
            }
        }
        return abs(dsum-sum);
    }
};