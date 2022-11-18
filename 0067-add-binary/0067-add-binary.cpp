class Solution {
public:
    string addBinary(string a, string b) {
         int i=a.length()-1;
        int j=b.length()-1;
        int carry=0,sum=0;
        string ans="";
        
        while(i>=0 || j>=0 || carry){
            sum=0;
            if(i>=0){
            sum+= a[i--]-'0';
            }
            if(j>=0){
             sum+= b[j--]-'0';
            } 
            sum+=carry;
            carry=sum > 1 ? 1:0;
         
         ans+=to_string(sum%2);
          
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};