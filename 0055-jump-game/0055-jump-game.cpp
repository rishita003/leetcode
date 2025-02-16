class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (i > maxReach) {
                return false; // If we can't reach this index, return false
            }
            maxReach = max(maxReach, i + nums[i]); // Update the max reachable index
            if (maxReach >= n - 1) {
                return true; // If we can reach the last index, return true
            }
        }
        return false;
    }
};