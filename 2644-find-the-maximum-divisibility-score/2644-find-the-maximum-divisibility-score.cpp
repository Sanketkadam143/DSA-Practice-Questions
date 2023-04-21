
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxcount = 0;
        int best_divisor = divisors[0];
        for (int i = 0; i < divisors.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    count++;
                }
            }
            if(count==maxcount){
               best_divisor = min(best_divisor,divisors[i]);
            }
            if (count > maxcount) {
                maxcount = count;
                best_divisor = divisors[i];
            }
        }
         return best_divisor;
    }
};