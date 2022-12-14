class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        for(auto& it:map){
            if(it.second!=map.begin()->second)return false;
        }
        return true;
    }
};