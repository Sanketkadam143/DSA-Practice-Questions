class Solution {
public:
    bool digitCount(string num) {
       unordered_map<char,int>map;
       for(auto& digit:num)map[digit]++;
       for(int i=0;i<num.length();i++){
           char c=i+'0';
           if(map[c]!=num[i]-'0')return false;
       }
     return true;
    }
};