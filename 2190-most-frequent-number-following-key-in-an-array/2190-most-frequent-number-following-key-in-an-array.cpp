class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> map;
        int count = 0, ans = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                int target = nums[i + 1];
                map[target]++;
                if (map[target] > count) {
                    count = map[target];
                    ans = target;
                }
            }
        }
        return ans;
    }
};
