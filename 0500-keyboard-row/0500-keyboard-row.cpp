class Solution {
    
public:
    
     bool isinline(string s,string key){
        
    for (int i=0;i<s.length();i++){
         bool flag=false;
      for(int j=0;j<key.length();j++){
          if(s[i]==key[j]){
              flag=true;
              break;
          }

      }  
                 if(flag==false)return false;
    } 
         return true;
 }
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
     string key1="qwertyuiopQWERTYUIOP";
     string key2="asdfghjklASDFGHJKL";
     string key3="zxcvbnmZXCVBNM";
               
    for(int i=0;i<words.size();i++){
      if(isinline(words[i],key1)) ans.push_back(words[i]); 
      if(isinline(words[i],key2)) ans.push_back(words[i]);
      if(isinline(words[i],key3)) ans.push_back(words[i]);
    }
        
        return ans;
    }
       
};