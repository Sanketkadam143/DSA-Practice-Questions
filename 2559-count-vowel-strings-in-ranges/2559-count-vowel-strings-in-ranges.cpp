class Solution {
public:
    vector<int> preprocess(vector<string>& words) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int> prefix(words.size());
        for (int i = 0; i < words.size(); i++) {
            if (vowels.count(words[i][0]) == 1 && vowels.count(words[i][words[i].length() - 1]) == 1) {
                prefix[i] = 1;
            }
        }
        for (int i = 1; i < prefix.size(); i++) {
            prefix[i] += prefix[i - 1];
        }
        return prefix;
    }
    
    int checker(vector<int> range, vector<int>& prefix) {
        if (range[0] == 0) {
            return prefix[range[1]];
        } else {
            return prefix[range[1]] - prefix[range[0] - 1];
        }
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) { 
        vector<int> prefix = preprocess(words);
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(checker(queries[i], prefix));
        }
        return ans;
    }
};





