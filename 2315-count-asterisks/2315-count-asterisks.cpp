class Solution {
public:
    int countAsterisks(string s) {
        int counter=0,num=0;
        for(int i=0;i<s.length();i++){
          if(s[i]=='|'){
              counter++;
          }
          if(counter==0 && s[i]=='*') num++; 
          if(counter==2) counter=0;
        }
        
        return num;
    }
};