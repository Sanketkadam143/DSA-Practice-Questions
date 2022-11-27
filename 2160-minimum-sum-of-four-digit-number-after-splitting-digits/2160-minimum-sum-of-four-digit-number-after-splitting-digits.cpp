class Solution {
public:
    int minimumSum(int num) {
        string s="";
        int sum=0;
        stringstream ss;
        ss<<num;
        ss>>s;
        
        sort(s.begin(),s.end());
        sum=(s[0]-'0'+s[1]-'0')*10 + (s[2]-'0'+s[3]-'0');
        return sum;
    }
};