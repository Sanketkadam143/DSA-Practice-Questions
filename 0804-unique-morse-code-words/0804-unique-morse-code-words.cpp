class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string alphabets="abcdefghijklmnopqrstuvwxyz",temp="";
        vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string>map;
        set<string>ans;

        for(int i=0;i<26;i++){
           map.insert({alphabets[i],code[i]});
        }
        for(int i=0;i<words.size();i++){
            temp="";
            for(int j=0;j<words[i].length();j++){
              temp+=map.at(words[i][j]);
            }
           
            ans.insert(temp);
        }
      return ans.size();
    }
};