class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto& it:map){
            if(it.second%2!=0)return false;
        }
        return true;
    }
};