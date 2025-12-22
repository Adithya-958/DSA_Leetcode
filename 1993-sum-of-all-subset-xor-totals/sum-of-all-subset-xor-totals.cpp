class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitOR = 0;
        for (int num : nums) {
            bitOR |= num;
        }
        return bitOR * (1 << (nums.size() - 1));
    }
};