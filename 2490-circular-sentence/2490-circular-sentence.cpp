class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0]!=sentence[sentence.length()-1])return false;
        stringstream ss(sentence);
        string word="";
        char first, last;
        ss >> word;
        last = word[word.length()-1];
        while(ss >> word){
            first=word[0];
            if(first!=last)return false;
            last = word[word.length()-1];
        }
        return true;
    }
};
