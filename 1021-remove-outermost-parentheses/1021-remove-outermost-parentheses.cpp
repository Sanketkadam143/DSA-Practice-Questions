class Solution {
public:
    string removeOuterParentheses(string s) {
       int counter=0,firstIndex=0,len=0;
       string temp="";
       for(int i=0;i<s.length();i++){
           len++;
           if(counter==0)firstIndex=i;
           if(s[i]=='(')counter++;
           if(s[i]==')')counter--;
           if(counter==0){
            temp+=s.substr(firstIndex+1,len-2);
            len=0;  
           }
       }      
        return temp;
    }
};