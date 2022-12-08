class Solution {
public:
    bool isVowel(char alpha){
        string vowels="aeiouAEIOU";
        for(int i=0;i<vowels.length();i++){
           if(vowels[i]==alpha) return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.length()/2,a=0,b=0;        
        for(int i=0;i<n;i++){
            if(isVowel(s[i]))a++;
            if(isVowel(s[n+i]))b++;
        }
        return a==b;
    }
};