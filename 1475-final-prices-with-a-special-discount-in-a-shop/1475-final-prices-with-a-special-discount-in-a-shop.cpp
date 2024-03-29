class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }else if(j==n-1){
                    ans.push_back(prices[i]);
                }
            }
            if(i==n-1)ans.push_back(prices[i]);
        }
        return ans;
    }
};