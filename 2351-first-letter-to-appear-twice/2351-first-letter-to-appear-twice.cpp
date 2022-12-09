class Solution {
public:
    char repeatedCharacter(string s) {
        set<char>temp;
        for(int i=0;i<s.length();i++){
            if(!temp.insert(s[i]).second)return s[i];
        }
        return s[0];
    }
};