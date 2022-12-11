class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0,greater=0,counter=0,n=grid[0].size();
        for(int i=0;i<grid.size();i++){
        sort(grid[i].begin(),grid[i].end()); 
        }

        for(int j=0;j<n;j++){
           counter=0;
        for(int i=0;i<grid.size();i++){         
           greater=grid[i][grid[i].size()-1];
           grid[i].pop_back();
           if(greater>counter)counter=greater;
        }
         ans+=counter;   
       }
     return ans;
   }
};