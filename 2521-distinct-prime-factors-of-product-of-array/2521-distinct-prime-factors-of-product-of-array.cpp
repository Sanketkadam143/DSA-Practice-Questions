class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> primeFactors;
    for (int num : nums) {
        int n = num;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                primeFactors.insert(i);
                n /= i;
            }
        }
    }
    return primeFactors.size();
    }
};