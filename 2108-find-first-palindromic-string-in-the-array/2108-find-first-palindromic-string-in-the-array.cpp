class Solution {
public:
    bool ispalindrome(string s){
        string temp=s;
        reverse(s.begin(), s.end());
        if(temp== s)return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispalindrome(words[i]))return words[i];
        }
        return "";
    }
};