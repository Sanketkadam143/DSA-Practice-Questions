class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0,countl=0,ans=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='R') countr++;
            if(s[i]=='L') countl++;
            
            if(countr==countl){
                ans++;
                countr=0;
                countl=0;
            }
        }
        
        return ans;
    }
};