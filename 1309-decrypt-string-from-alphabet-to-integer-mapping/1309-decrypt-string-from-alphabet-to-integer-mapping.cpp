class Solution {
public:
    string freqAlphabets(string s) {
        string ans="",pos="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
              pos=s[i+2];
              pos+=s[i+1];
              ans+='a'+stoi(pos)-1;
              i+=2;
            }else{
                ans+='a'+ s[i]-'0'-1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
