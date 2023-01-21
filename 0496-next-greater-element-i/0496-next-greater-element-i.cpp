class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        bool found=false;
        for(auto& num1:nums1){
          bool found=false;
            for(auto& num2:nums2){
                if(num1==num2)found=true;
                if(found && num2>num1){
                    ans.push_back(num2);
                    found=false;
                    break;
                }
            }
            if(found)ans.push_back(-1);
        }
      return ans;
    }
};