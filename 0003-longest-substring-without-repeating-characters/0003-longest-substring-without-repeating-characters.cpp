class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int start = 0;
        unordered_set<char> char_set;
        for (int end = 0; end < s.length(); end++) {
            while (char_set.count(s[end])) {
                char_set.erase(s[start]);
                start++;
            }
            char_set.insert(s[end]);
            max_len = max(max_len, end - start + 1);
        }
        return max_len;
    }
};
