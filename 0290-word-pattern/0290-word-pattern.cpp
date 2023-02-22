class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> myMap;
        stringstream ss(s);
        string word;
        int i = 0;
        while (ss >> word) {
            if (i >= pattern.size()) {
                return false;
            }
            char c = pattern[i];
            if (myMap.count(c) && myMap[c] != word) {
                return false;
            } else if (!myMap.count(c)) {
                for (auto& it : myMap) {
                    if (it.second == word) {
                        return false;
                    }
                }
                myMap[c] = word;
            }
            i++;
        }
        return i == pattern.size();
    }
};
