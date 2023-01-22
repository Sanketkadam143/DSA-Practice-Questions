class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        string num=to_string(n);
        for(int i=0;i<num.length();i++){
            if(i%2==0){
                sum+=num[i]-'0';
            }else{
                sum-=num[i]-'0';
            }
        }
        return sum;
    }
};