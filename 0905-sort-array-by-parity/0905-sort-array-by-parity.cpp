class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>vec1,vec2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                vec1.push_back(nums[i]);
            }else{
               vec2.push_back(nums[i]);
            }
        }
        vec1.insert(vec1.end(),vec2.begin(),vec2.end());
        return vec1;
    }
};