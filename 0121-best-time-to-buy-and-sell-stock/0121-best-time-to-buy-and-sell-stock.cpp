class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minindex=0;
        
       for(int i=0; i< prices.size();i++){
          if(prices[i]<prices[minindex]){
             minindex=i;
          }
            if((prices[i]-prices[minindex])>maxprofit)
             maxprofit=prices[i]-prices[minindex];
       } 
        return maxprofit;
    }
};