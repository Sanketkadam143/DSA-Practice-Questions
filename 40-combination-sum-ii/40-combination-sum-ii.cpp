class Solution {
    public:
    void findcombination(int index,vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
    for(int i=index;i<arr.size();i++){
        
         // condition to skip the duplicates
             
        if(i>index && arr[i]==arr[i-1]) continue;
        
         // End condition where candidates are greater                                                   than target
             
        if(arr[i]>target) break;  
        
        ds.push_back(arr[i]);
        findcombination(i+1,arr,target-arr[i],ans,ds);
        ds.pop_back();
    }
    }
    
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcombination(0,candidates,target,ans,ds);
        return ans;
    }
};