class Solution {
public:
    int countDigits(int num) {
       string number=to_string(num);
        int count=0;
        for(int i=0;i<number.size();i++){
            int temp=number[i]-'0';
            if(num%temp==0)count++;
        }
    return count;
    }
};