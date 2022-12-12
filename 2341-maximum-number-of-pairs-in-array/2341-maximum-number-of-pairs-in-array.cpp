class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int counter=0;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
                counter++; 
                i++;
           }
        }
        ans.push_back(counter);
        ans.push_back(nums.size()-2*counter);
        return ans;
    }
};