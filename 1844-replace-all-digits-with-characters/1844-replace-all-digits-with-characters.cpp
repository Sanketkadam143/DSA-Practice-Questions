class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.length();i++){
            if(i%2==1){
                s[i]=s[i-1]+s[i]-'0';
            }
        }
        return s;
    }
};