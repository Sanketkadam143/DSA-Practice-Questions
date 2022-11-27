class Solution {
public:
    string sortSentence(string s) {
        vector<string>result;
        string ans="",temp="";
        stringstream ss(s);
        
        while( ss>>temp){
            result.push_back(temp);
        }
       for(int i=0;i<result.size();i++){
          for(int j=0;j<result.size();j++){
              temp=result[j];
              if(temp[temp.length()-1]-'0'==i+1) ans+=temp.erase(temp.size()-1);
          }
            if(i!=result.size()-1)ans+=" ";
       }
        return ans;
    }
};