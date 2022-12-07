class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string words;
        int ans=0;
        while(ss>>words){
            ans++;
        }
        return ans;
    }
};