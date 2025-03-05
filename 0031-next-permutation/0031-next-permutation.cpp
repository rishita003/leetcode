class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) // If only one element, return
            return;

        int lastInc = -1; // Rightmost peak index
        for (int i = 1; i < n; i++) {  // Find the last increasing pair
            if (nums[i] > nums[i - 1])
                lastInc = i;
        }

        if (lastInc == -1) {  // If array is completely descending
            reverse(nums.begin(), nums.end()); // Reverse and return
            return;
        }

        // Find the next greater element in the range
        int index = lastInc;
        for (int i = lastInc; i < n; ++i) {
            if (nums[i] > nums[lastInc - 1] && nums[i] <= nums[index]) {
                index = i;
            }
        }

        swap(nums[lastInc - 1], nums[index]);
        sort(nums.begin() + lastInc, nums.end());  // Sort the remaining part
    }
};
