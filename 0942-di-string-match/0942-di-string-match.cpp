class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int a=0,b=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
              ans.push_back(a++);  
            }else{
                ans.push_back(b--);
            }            
        }
        if(s[s.length()-1]=='I'){
          ans.push_back(a++);  
        }else{
            ans.push_back(b--);
        }
        return ans;
    }
};