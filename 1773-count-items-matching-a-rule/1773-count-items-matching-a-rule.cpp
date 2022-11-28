class Solution {
public:
    int search(int index,string ruleValue,vector<vector<string>>& items){
        int counter=0;
        for(int i=0;i<items.size();i++){
            if(items[i][index]==ruleValue) counter++;
        }
        return counter;
    }
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index;
        if(ruleKey == "type") return(search(index=0,ruleValue, items));
        if(ruleKey == "color") return(search(index=1,ruleValue, items));
        if(ruleKey == "name") return(search(index=2,ruleValue, items));
        
        return 0;
    }
};