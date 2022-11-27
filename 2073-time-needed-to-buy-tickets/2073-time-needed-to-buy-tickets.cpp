class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      int sec=0;
      int maxticket=*max_element(tickets.begin(), tickets.end()); 
     for(int i=0;i<maxticket;i++){
         
         for(int j=0;j<tickets.size();j++){
             if(tickets[j]!=0){
                  sec++;
                  tickets[j]=tickets[j]-1;
             }
             if(tickets[k]==0) return sec;
              
         }
     }
    
       return sec;
    }
};