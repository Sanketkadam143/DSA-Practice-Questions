class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string temp="";
        int counter=0;
        for(int i=0;i<s.length();i++){
            temp+=s[i];
            counter++;
              if(counter==k){
                ans.push_back(temp);
                temp="";
                counter=0;
            }
        }
        if(s.length()%k!=0){
            while(temp.length()<k){
                temp+=fill;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};