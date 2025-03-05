class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) // if only one element ther=n return
            return;

        int i = 1;
        int lastInc = -1; // rightmost peak
        while (i < n) {   // find the peak of the last element
            if (nums[i] > nums[i - 1])
                lastInc = i;
                i += 1;
        }
         

        if (lastInc == -1) {               //check array if it is in descending order 
            for (i = 0; i < n / 2; ++i) {              //n/2 is for swapping 
                swap(nums[i], nums[n - i - 1]);           //if it then simply sort the array and return
            }
             return;
        }

        //find the element in the range
        int mn = nums[lastInc];
        int index = lastInc;
        for (i = lastInc; i < n; ++i) {
            if (nums[i] > nums[lastInc - 1] && nums[i] < nums[index]) {
                index = i;
            }
        }

        swap(nums[lastInc - 1], nums[index]);
        sort(nums.begin() + lastInc, nums.end());
    }
};