class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();double ans=0;
        for(int i=0;i<n/2;i++){
            string res="";
            res+=to_string(nums[i])+to_string(nums[n-i-1]);
            ans+=stoi(res); 
        }
         if(n % 2 == 1){
            ans += nums[n/2];
          }
        return ans;
    }
};