class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        unordered_map<string,int>m1,m2;
        for(auto& word:words1)m1[word]++;
        for(auto& word:words2)m2[word]++;
        for(auto& word:words2){
           if(m1[word]==1 && m2[word]==1)count++;
        }
     return count;
    }
};