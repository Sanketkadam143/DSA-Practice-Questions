class Solution {
public:
   bool isVowel(string word) {
    string vowels = "aeiouAEIOU";
    return vowels.find(word[0]) != string::npos && vowels.find(word.back()) != string::npos;
}

    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
          if(isVowel(words[i]))count++;
        }
        return count;
    }
};