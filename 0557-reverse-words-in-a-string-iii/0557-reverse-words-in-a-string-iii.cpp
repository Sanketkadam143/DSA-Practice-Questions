class Solution {
public:
    string reverseWords(string s) {
        string word="",ans="";
        stringstream ss(s);        
        while(ss>>word){            
            reverse(word.begin(),word.end());            
            ans+=word;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};