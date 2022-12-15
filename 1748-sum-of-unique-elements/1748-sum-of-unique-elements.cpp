class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int>map;
        int sum=0;
       for(int i=0;i<nums.size();i++){
         map[nums[i]]++;
       }
       for(auto& it:map){
           if(it.second==1)sum+=it.first;
       }
        return sum;
    }
};