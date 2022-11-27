class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int counter=0,ans=0;
        string temp="";
        for(int i=0;i<sentences.size();i++){
            temp=sentences[i];
            counter=count(temp.begin(),temp.end(),' ');
            ans = max(ans,counter+1);
        }
        
        return ans;
    }
};