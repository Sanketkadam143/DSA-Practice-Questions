class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int>left(nums.size() , 0);
        vector<int>right(nums.size() ,0);
        int leftSum = 0;
        int rightSum = 0;
        int j = nums.size()-1;
        for(int i=0;i<nums.size() ; i++){
            left[i] = leftSum;
            leftSum += nums[i];

            right[j] = rightSum;
            rightSum += nums[j--];


        }
        for(int i=0;i<nums.size() ; i++){
            nums[i] = abs(left[i] -right[i]);
        }

        return nums;
    }
};