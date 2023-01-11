class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> lastIndex(26, -1);
        for (int i = 0; i < s.length(); i++) {
            int letter = s[i] - 'a';
            if (lastIndex[letter] == -1) {
                lastIndex[letter] = i;
            } else {
                int dis = i - lastIndex[letter] - 1;
                if (dis != distance[letter]) {
                    return false;
                }
                lastIndex[letter] = i;
            }
        }
        return true;
    }
};
