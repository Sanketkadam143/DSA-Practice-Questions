class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        int minIndex=0,min=0;
     for(int i=0;i<matrix.size();i++){
         min=matrix[i][0];
         minIndex=0;
         bool isgreater=true;
         for(int j=0;j<matrix[i].size();j++){
             if(matrix[i][j]<min){
                 minIndex=j;
                 min=matrix[i][j];
             }
         }
         for(int k=0;k<matrix.size();k++){
             if(matrix[k][minIndex]>min){
                 isgreater=false;
                 break;
             }
         }
         if(isgreater)ans.push_back(min);
     }
        return ans;
    }
};