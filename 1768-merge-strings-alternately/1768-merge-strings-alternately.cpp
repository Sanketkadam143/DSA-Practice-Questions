class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length(),n2=word2.length(),n=n2;
        string ans="";
        if(n1>n2)n=n1;
        for(int i=0;i<n;i++){
           if(n1>i) ans+=word1[i];
           if(n2>i) ans+=word2[i];
        }
        return ans;
    }
};