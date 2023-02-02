class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size()-1;
        for(int i=0; i<=size; i++){
            if(nums[i]==0){
                for(int j=i; j<size; j++){
                    nums[j]=nums[j+1];
                }
                nums[size]=0;
                size--;
                i--;
            }
        }
    }
};
