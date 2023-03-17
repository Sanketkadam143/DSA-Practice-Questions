class Solution {
public:
    int smallestEvenMultiple(int n) {
        int num=n;
        while(true){
            if(num%2==0)return num;
            num+=n;
        }
        return n;
    }
};