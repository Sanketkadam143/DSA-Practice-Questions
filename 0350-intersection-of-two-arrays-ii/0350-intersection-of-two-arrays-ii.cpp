class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int ind=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=ind;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    ind=j+1;
                    break;
                }
                if(nums1[i]<nums2[j]){
                    ind=j;
                    break;
                }
            }
        }
        return ans;
    }
};