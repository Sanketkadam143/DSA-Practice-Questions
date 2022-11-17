class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
      sort(nums.begin(), nums.end(),greater<int>());
        int counter=1;
        
        for(int i=1; i<nums.size();i++){
            
            if(nums[i]!=nums[i-1] ){
              counter++;
            }
              if(counter==3){
              
                return nums[i];
            }  
            
             
        }
    
        return nums[0];
    }
};