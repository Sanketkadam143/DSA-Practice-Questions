class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>map;
        int ans=0;
        double n=s.length();
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        for(auto& mp:map){
            if(mp.first==letter){
              ans=mp.second/n*100;
              break;
          }
        }
        return ans;
    }
};