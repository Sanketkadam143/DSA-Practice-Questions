class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>map;
        for(auto& num:nums)map[num]++;
        for(int i=0;i<n;i++){
            if(map.count(i+1)==0)ans.push_back(i+1);
        }
        return ans;
    }
};