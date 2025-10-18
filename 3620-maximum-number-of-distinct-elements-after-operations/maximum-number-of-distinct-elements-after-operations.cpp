class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        // Step 1: Sort the array to handle duplicates in order
        sort(nums.begin(), nums.end());

        int updatedK = k;             // temporary shift value
        int lastElement = INT_MAX;    // will store the last unique element (starting from rightmost)
        int cntUniqueElement = 0;     // counts how many distinct elements are formed

        // Step 2: Process from right to left
        for (int i = nums.size() - 1; i >= 0; i--) {

            // Case 1: Last element in the array
            if (i == nums.size() - 1) {
                // Always push it as far right as possible
                nums[i] += updatedK;
            } 
            else {
                // Case 2: Current element equals the adjusted next element (possible overlap)
                if (nums[i] == nums[i + 1] - updatedK) {
                    updatedK--; // try reducing shift to make it distinct

                    // If updatedK becomes invalid (exceeds ±k range), revert
                    if (abs(updatedK) > abs(k)) {
                        updatedK++;
                        nums[i] += updatedK;  // fallback
                    } 
                    else {
                        nums[i] += updatedK;  // apply reduced shift
                    }
                } 
                else {
                    // Case 3: Make sure the new element doesn't overlap with next
                    updatedK = min(nums[i + 1] - nums[i] - 1, k);
                    nums[i] += updatedK;
                }
            }

            // Step 3: Count unique only when it is strictly smaller than previous
            if (nums[i] < lastElement) {
                lastElement = nums[i];
                cntUniqueElement++;
            }
        }

        // Step 4: Return total count of distinct elements
        return cntUniqueElement;
    }
};