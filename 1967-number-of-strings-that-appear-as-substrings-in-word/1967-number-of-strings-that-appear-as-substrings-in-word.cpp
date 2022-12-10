class Solution
{
    public:
        bool issub(string s, string word)
        {
            if (word.find(s) != std::string::npos) return true;
            return false;
        }
    int numOfStrings(vector<string> &patterns, string word)
    {
        int counter = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (issub(patterns[i], word)) counter++;
        }
        return counter;
    }
};