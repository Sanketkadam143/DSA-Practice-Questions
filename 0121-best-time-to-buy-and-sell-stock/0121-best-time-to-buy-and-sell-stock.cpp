class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,index=0;
        
       for(int i=0; i< prices.size();i++){
          if(prices[i]<prices[index]){
             index=i;
          }
            if((prices[i]-prices[index])>maxprofit)
             maxprofit=prices[i]-prices[index];
       } 
        return maxprofit;
    }
};