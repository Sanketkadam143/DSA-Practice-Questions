class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp1="",temp2="";
        temp1=word.substr(0,word.find(ch)+1);
        temp2=word.substr(word.find(ch)+1,word.length());
        reverse(temp1.begin(),temp1.end());
        return temp1+temp2;
    }
};