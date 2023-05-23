class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int> mp1,mp2;
        for(auto &i: nums)mp2[i]++;
        vector<int> ans;
        for(auto &i: nums){
            mp2[i]--;
            mp1[i]++;
            if(mp2[i]==0)mp2.erase(i);
            ans.push_back(mp1.size()-mp2.size());
        }
        return ans;
    }
};