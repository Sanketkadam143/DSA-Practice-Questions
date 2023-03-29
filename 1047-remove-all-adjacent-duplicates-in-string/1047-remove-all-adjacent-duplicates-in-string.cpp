class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> res;
        for (char c : s) {
            if (!res.empty() && c == res.back()) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        return string(res.begin(), res.end());
    }
};
