class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1)return false;
        sort(deck.begin(),deck.end());
        vector<int>temp;
        int counter=1;
        for(int i=1;i<deck.size();i++){
           if(deck[i-1]==deck[i]){
               counter++;
           }else if(deck[i]>deck[i-1]){
               temp.push_back(counter);
               counter=1;
           }
          if(i==deck.size()-1)temp.push_back(counter);
          }
        int gcd = *min_element(temp.begin(), temp.end());
        for(int i=0;i<temp.size();i++){
            
            gcd=__gcd(gcd,temp[i]);
        }
        return  gcd != 1;
    }
};