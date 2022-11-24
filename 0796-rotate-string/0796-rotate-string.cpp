class Solution {
public:
    bool rotateString(string s, string goal) {
        char temp;
        for(int i=0;i<s.length();i++){
             temp=s[0];
            for(int j=1;j<s.length();j++){
                s[j-1]=s[j];    
            }
            s[s.length()-1]=temp;
           
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};