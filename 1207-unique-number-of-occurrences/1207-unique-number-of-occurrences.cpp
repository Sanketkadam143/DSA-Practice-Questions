class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        set<int>unique;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(auto& it:map){
          if(unique.insert(it.second).second==false)return false;
        }
        return true;
    }
};