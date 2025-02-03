class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2;

        while (s <= e) {

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else if(nums[mid] > target){
                e = mid - 1;
            }
            mid = (s + e) / 2;                // update the mid every time
        }
        return -1; 
    }
};