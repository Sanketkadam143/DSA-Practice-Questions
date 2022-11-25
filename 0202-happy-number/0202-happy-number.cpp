class Solution {
public:
    bool isHappy(int n) {
          if(n==1){
            return true ;
          }
          if(n==89){
              return false;
          }
       string s="";
        int sum=0;
        stringstream  ss;
        ss<<n;
        ss>>s;
       for(int i=0;i<s.length();i++){
          sum+=(s[i]-'0')*(s[i]-'0'); 
       }
           
        return isHappy(sum);
    }
};