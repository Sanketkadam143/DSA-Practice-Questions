class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    if((j-i-1)!=distance[s[i] - 'a']){
                        return false;
                    }else{
                        break;
                    }
                }
            }
        }
        return true;
    }
};