class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num),maximum="",minimum="";
        int remax,remin;
        bool found1=false,found2=false;
        int i=0,j=0;
        while(!found1){
            if(s[i]!='9'){
                remax=s[i];
                found1=true;
            }
            i++;
        }
        while(!found2){
            if(s[j]!='0'){
                remin=s[j];
                found2=true;
            }
            j++;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==remax){
                maximum+='9';
            }else{
                maximum+=s[i];
            }
            if(s[i]==remin){
                minimum+='0';
            }else{
                minimum+=s[i];
            }
        }
     
        int max=stoi(maximum);
        int min=stoi(minimum);
        return max-min;
    }
};