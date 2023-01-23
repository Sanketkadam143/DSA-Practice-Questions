class Solution {
public:
    int countCharacters(vector<string>& v, string s) {
        int ans = 0;
        map<char, int> char_count;
        for (auto c : s) {
            char_count[c]++;
        }
        for (auto word : v) {
            map<char, int> temp_count = char_count;
            bool is_good = true;
            for (auto c : word) {
                if (temp_count[c] <= 0) {
                    is_good = false;
                    break;
                }
                temp_count[c]--;
            }
            if (is_good) {
                ans += word.length();
            }
        }
        return ans;
    }
};
