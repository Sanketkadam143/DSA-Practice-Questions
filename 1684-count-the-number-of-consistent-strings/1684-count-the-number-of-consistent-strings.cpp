class Solution {
public:
     bool isconsistent(string word,string allowed){
         bool isfound=false;
         for(int i=0;i<word.length();i++){
             isfound=false;
             for(int j=0;j<allowed.length();j++){
                 if(word[i]==allowed[j]){
                  isfound=true;
                  break;   
                 }
             }
             if(isfound==false)return false;
         }
         return true;
     }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            if(isconsistent(words[i],allowed)==true)ans++;
        }
      return ans;  
    }
};