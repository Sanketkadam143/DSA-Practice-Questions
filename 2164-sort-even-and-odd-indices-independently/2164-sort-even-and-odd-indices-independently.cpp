class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
      vector<int>odd,even;
      for(int i=0;i<nums.size();i++){
          if(i%2==0)even.push_back(nums[i]);
           else odd.push_back(nums[i]);
      }
      sort(odd.begin(),odd.end(),greater<int>());
      sort(even.begin(),even.end());
       int j=0,k=0;
      for(int i=0;i<nums.size();i++){
          if(i%2==0)nums[i]=even[j++];
            else nums[i]=odd[k++];
      }
     return nums;
    }
};