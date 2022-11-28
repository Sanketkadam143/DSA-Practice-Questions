class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int sum=0;
        bool isgreater;
        for(int i=0;i<candies.size();i++){
            sum=candies[i]+extraCandies;
            isgreater=true;
            for(int j=0;j<candies.size();j++){
                if(candies[j]>sum) isgreater=false;
            }
            ans.push_back(isgreater);
        }
        return ans;
    }
};