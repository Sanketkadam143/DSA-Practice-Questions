class Solution {
public:
    int pivotInteger(int n) {
        int left=0,right=0;
        for(int i=1;i<=n;i++){
            left=0;
            right=0;
            for(int j=1;j<=i;j++){
                left+=j;              
            }
            for(int k=n;k>=i;k--){
                right+=k;
            }
            if(left==right)return i;
        }
        return -1;
    }
};