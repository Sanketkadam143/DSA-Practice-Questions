class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        int minLen=strs[0].length();
        for(int i=1;i<strs.size();i++){
            minLen=min(minLen,(int)strs[i].length());
        }
        string prefix="";
        for(int i=0;i<minLen;i++){
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=c)return prefix;
            }
            prefix+=c;
        }
        return prefix;
    }
};