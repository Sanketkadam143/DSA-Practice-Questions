class Solution {
public:
    string generateTheString(int n) {
        string ans="";int len=n;
        if(n%2==0) len=n-1;        
        for(int i=0;i<len;i++){
            ans+='a';
        }
        if(n%2==0) ans+='b';
        return ans;
    }
};