class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result=0,max=0;
        
        for(int i=0;i<accounts.size();i++){
            max=0;
            for(int j=0;j<accounts[i].size();j++){
                max+=accounts[i][j];
            }
            if(max>result) result=max;
        }
        
        return result;
    }
};