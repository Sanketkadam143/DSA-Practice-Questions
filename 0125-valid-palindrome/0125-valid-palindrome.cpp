class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length();
        if(n==1){
            return true;
        }
         string str = "";
        for(int i=0; i<n; i++) {
            if(isalnum(s[i])) str +=s[i];
        }
        
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        
        for(int i=0;i<str.length();i++){
          if(str[i]!=str[str.length()-1-i]){
              return false;
          }  
        }
        return true;
        
    }
};