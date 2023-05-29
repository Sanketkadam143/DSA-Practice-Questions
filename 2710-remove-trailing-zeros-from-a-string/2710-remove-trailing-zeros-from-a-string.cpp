class Solution {
public:
    string removeTrailingZeros(string num) {
        int n= num.size();
        int i =n-1;
        while(num[i]=='0'){
            i--;
        }
        string ans="";
        for(int k =0;k<=i;k++) ans+=num[k];
return ans;
    }
};