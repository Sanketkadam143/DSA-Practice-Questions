class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum=0,index=-1;
        for(int i=0;i<k;i++){
            int maxi=*max_element(gifts.begin(),gifts.end());
            for(int j=0;j<gifts.size();j++){
                if(maxi==gifts[j]){
                    index=j;
                    break;
                }
            }
        gifts[index]=floor(sqrt(gifts[index]));          
        }
        for(auto& it:gifts)sum+=it;
        
        return sum;
    }
};