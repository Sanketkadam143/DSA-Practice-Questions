class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int expectedSum = (nums.size() * (nums.size() + 1)) / 2;
    int actualSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            actualSum += nums[i];
        }
        return expectedSum - actualSum;
    }
};