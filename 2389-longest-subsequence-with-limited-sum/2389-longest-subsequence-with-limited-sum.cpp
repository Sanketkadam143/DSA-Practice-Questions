class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
      sort(nums.begin(),nums.end());
      vector<int>ans;
      int counter=0,sum=0;
      for(int i=0;i<queries.size();i++){
          counter=0,sum=0;
          for(int j=0;j<nums.size();j++){
             sum+=nums[j];
             if(queries[i]>=sum){
              counter++;
             }else{
                  break;
              }
          }
          ans.push_back(counter);
      }
        return ans;
    }
};