class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first="",second="";
        for(int i=0;i<word1.size();i++){
            first+=word1[i];
        }
        for(int j=0;j<word2.size();j++){
            second+=word2[j];
        }
        return first==second;
    }
};