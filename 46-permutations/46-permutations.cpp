class Solution {
private:
    void permutation (vector<int>& nums,vector<vector<int>>& ans, vector<int>& ds, int permut[]){
        
        // Base condition 
            
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
       
        for(int i=0;i<nums.size();i++){
            
            // checking whether element is previously taken,proceeding if not taken
                
        if(!permut[i]){
            
            ds.push_back(nums[i]);
            
             
            // setting value to indicate this index is taken
            permut[i]=1;  
            
            permutation(nums,ans,ds,permut);
            
            ds.pop_back();
            
            // resetting value to indicate this index is not-taken
            permut[i]=0;
        }
      }
        
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
       vector<vector<int>>ans;
        
        vector<int>ds;
        
        // Creating a map to check whether element is previously taken or not
            
        int permut[nums.size()];
        
        // initializing the values of array to zero
            
        for(int i=0;i<nums.size();i++){
            permut[i]=0;
        }
        
       permutation(nums,ans,ds,permut);
        
        return ans;
        
    }
};