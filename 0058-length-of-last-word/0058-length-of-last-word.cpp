class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0;
        for(int i=s.length()-1;i>=0;i--){
           
            if(s[i]==' ' && counter>0){
               return counter;
            }
            if(s[i]!=' '){
                 counter++;
            }
           
        }
         return counter;
    }
   
};