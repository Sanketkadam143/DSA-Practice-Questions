class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m1,m2;
    vector<string>ans;
    

    stringstream ss(s1);
    string word="";
    while(ss>>word){
        m1[word]++;
    }
    
   
    stringstream sss(s2);
    string word1="";
    while(sss>>word1){
        m2[word1]++;
    }
    

    for(auto& it : m1){
        if(m2.find(it.first) == m2.end() && it.second == 1){
            ans.push_back(it.first);
        }
    }
    
   
    for(auto& it : m2){
        if(m1.find(it.first) == m1.end() && it.second == 1){
            ans.push_back(it.first);
        }
    }
    
    return ans;
 }
};