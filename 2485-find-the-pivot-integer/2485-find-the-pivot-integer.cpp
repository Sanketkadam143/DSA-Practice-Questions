class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefixSum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i - 1] + i;
        }
        for (int i = 1; i <= n; i++) {
            int left = prefixSum[i - 1];
            int right = prefixSum[n] - prefixSum[i];
            if (left == right) {
                return i;
            }
        }
       return -1;
    }
};
