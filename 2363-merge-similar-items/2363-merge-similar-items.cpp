class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>map;
        vector<vector<int>>ans;
        for(int i=0;i<items1.size();i++){
          map[items1[i][0]]+=items1[i][1];            
        }
       for(int i=0;i<items2.size();i++){
          map[items2[i][0]]+=items2[i][1];            
        }
         for (auto& it : map) {
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};