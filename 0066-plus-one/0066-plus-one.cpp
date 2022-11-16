class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n; i>=0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        digits.push_back(0);
        digits[0]=1;
        
        return digits;
    }
};