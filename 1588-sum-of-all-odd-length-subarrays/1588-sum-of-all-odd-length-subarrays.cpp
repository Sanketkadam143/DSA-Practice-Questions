class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        for(int i=1;i<=arr.size();i+=2){
           for(int j=0;j<arr.size();j++){
               if(i+j>arr.size())break;
             ans+= accumulate(arr.begin()+j,arr.begin()+j+i,0);
           }
        }
        return ans;
    }
};