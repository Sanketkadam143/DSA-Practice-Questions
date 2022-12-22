class Solution {
public:
    bool isPrefix(string word,string s){
        for(int i=0;i<word.length();i++){
            if(word[i]!=s[i])return false;
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
      int counter=0;
      for(int i=0;i<words.size();i++){
          if(isPrefix(words[i],s))counter++;
      }
        return counter;
    }
};