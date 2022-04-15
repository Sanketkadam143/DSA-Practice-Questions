class Solution {
    
private:
    void subsets(int index, vector<int>&nums, vector<int>& ds,vector<vector<int>> &ans,int n){
       
        // Adding the subset to answer
            ans.push_back(ds);
          
        for(int i=index;i<n;i++){
            
         // condition for skipping duplicates
                
            if(i!=index && nums[i]==nums[i-1] ) continue;
            
            ds.push_back(nums[i]);
            
            subsets(i+1,nums,ds,ans,n);
            
            ds.pop_back();
            
         
            
        }
        
    
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        int n=nums.size();
        subsets(0,nums,ds,ans,n);
        return ans;
    }
};