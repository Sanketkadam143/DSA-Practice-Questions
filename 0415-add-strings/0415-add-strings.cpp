class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0,sum=0;
        string ans="";
        
        while(i>=0 || j>=0 || carry){
            sum=0;
            if(i>=0){
            sum+= num1[i--]-'0';
            }
            if(j>=0){
             sum+= num2[j--]-'0';
            } 
            sum+=carry;
            carry=sum > 9 ? 1:0;
         
         ans+=to_string(sum%10);
          
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};