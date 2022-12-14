class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            temp=nums;
            temp.erase(temp.begin()+i);
            if(temp.size()==1)return true;
            for(int j=1;j<temp.size();j++){
                if(temp[j-1]>=temp[j]){
                    break;
                }else if(j==temp.size()-1){
                    return true;
                }                
            }
        }
        return false;
    }
};