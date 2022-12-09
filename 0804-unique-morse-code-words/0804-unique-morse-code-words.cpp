class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string temp="";
        vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>ans;
        for(int i=0;i<words.size();i++){
            temp="";
            for(int j=0;j<words[i].length();j++){
              temp+=code[words[i][j]-'a'];
            }           
            ans.insert(temp);
        }
      return ans.size();
    }
};