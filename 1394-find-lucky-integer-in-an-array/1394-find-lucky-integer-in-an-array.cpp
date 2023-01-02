class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int>map;
      for(int i=0;i<arr.size();i++){
          map[arr[i]]++;
      }
      for(auto it=map.rbegin();it!=map.rend();it++){
         if(it->first==it->second)return it->first; 
      }
     return -1;
  }
};