class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length()<=k)return s;
        int sum=0;
        string ans="";
        for(int i=0;i<s.length();i+=k){
            sum=0;
            for(int j=i;j<i+k && j<s.length();j++){
                sum+=s[j]-'0';
            }
            ans+=to_string(sum);        
        }
     return digitSum(ans,k);
    }
};
