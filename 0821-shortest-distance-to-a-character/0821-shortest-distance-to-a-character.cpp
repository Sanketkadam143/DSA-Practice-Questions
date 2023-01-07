class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>pos,ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)pos.push_back(i);
        }
        int posInd=0;
        for(int j=0;j<s.length();j++){
            if(posInd== 0)
                ans.push_back(pos[posInd] - j); 
            else if(posInd>= pos.size())
                ans.push_back(j - pos[posInd - 1]);
            else
                ans.push_back(min(pos[posInd] - j , j - pos[posInd - 1]));
            if(s[j] == c)
               posInd++;
        }
        return ans;
    }
};