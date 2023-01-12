class Solution {
public:
    string greatestLetter(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        sort(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.length();i++){
            char l=tolower(s[i]);
            char u=toupper(s[i]);
            if(mp[l]&&mp[u])ans=u;
        }
     return ans;
    }
};