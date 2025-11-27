class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefixSum(n + 1);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        long long result = LLONG_MIN;
        for (int start = 0; start < k; start++) {
            long long current = start + k <= n ? prefixSum[start + k] - prefixSum[start] : LLONG_MIN;
            result = max(result, current);
            for (int i = start + 2 * k; i <= n; i += k) {
                long long sum = prefixSum[i] - prefixSum[i - k];
                current = max(current + sum, sum);
                result = max(result, current);
            }
        }

        return result;
    }
};