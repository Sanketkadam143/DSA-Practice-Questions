class Solution {
public:
    bool isvalid(string s){
        for(int i=0;i<s.length();i++){
            if(!isdigit(s[i]))return false;
        }
        return true;
    }
    int maximumValue(vector<string>& strs) {
        int max=0,counter=0;
        for(int i=0;i<strs.size();i++){             
            if(isvalid(strs[i])){
                counter=stoi(strs[i]);
            }else{
                counter=strs[i].length();
            }
            if(counter>max)max=counter;
        }
        return max;
    }
};