class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=n-1;
        while(n>1){
            double average=(nums[i]+nums[j])/2.0;
            ans.insert(average);
            i++;
            j--;
            n--;
        }
        return ans.size();
    }
};