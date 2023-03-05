class Solution {
public:
    int splitNum(int num) {
        string nums=to_string(num),num1="",num2="";
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.length();i++){
            if(i%2==0){
                num1+=nums[i];
            }else{
                num2+=nums[i];
            }
        }
        int ans=stoi(num1)+stoi(num2);
        return ans;
    }
};