class Solution {
public:
    int maxDepth(string s) {
        int counter=0,maxParentheses=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                counter++;
            }else if(s[i]==')'){
                counter--;
            }
            if(counter>maxParentheses){
                maxParentheses=counter;
            }
        }
        return maxParentheses;
    }
};