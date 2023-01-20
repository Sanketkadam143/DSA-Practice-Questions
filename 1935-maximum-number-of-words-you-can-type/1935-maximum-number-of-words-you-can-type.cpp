class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>map;
        int count=0;
        for(auto& word:brokenLetters)map[word]++;
        stringstream ss(text);
        string word;
        while(ss>>word) {
            bool flag = true;
            for(int i=0;i<word.length();i++){
                if(map.count(word[i])>=1){
                  flag=false;
                    break;
                }
            }
            if(flag)count++;
        }
        return count;
    }
};
