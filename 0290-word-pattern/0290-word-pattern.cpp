class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        stringstream ss(s);
        string word;
        int i = 0;
        while (ss >> word) {
            if (i >= pattern.size()) {
                return false;
            }
            char c = pattern[i];
            if (charToWord.count(c) && charToWord[c] != word) {
                return false;
            }
            if (wordToChar.count(word) && wordToChar[word] != c) {
                return false;
            }
            charToWord[c] = word;
            wordToChar[word] = c;
            i++;
        }
        return i == pattern.size();
    }
};
