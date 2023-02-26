class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>left={0},right,ans;
        int lsum=0,rsum=0,n=nums.size();
        for(int i=1;i<n;i++){
            lsum+=nums[i-1];
            left.push_back(lsum);
        }
        rsum = accumulate(nums.begin() + 1, nums.end(), 0);
        right.push_back(rsum);
        for(int j=1;j<n;j++){
            rsum-=nums[j];
            right.push_back(rsum);
        }
        for(int k=0;k<n;k++){
            ans.push_back(abs(left[k]-right[k]));
        }
        
        
       return ans; 
    }
};