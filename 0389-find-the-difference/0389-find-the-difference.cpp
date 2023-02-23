class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>map;
        for(auto& it:s)map[it]++;
        for(auto& it:t){            
            if(map[it]<1)return it;
            map[it]--;
        }
        return ' ';
    }
};