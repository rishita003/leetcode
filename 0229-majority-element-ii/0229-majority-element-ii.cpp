class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;

        for (int i = 0; i < nums.size(); i++) {
            if (arr.size() == 0 || arr[0] != nums[i]) {
                int count = 0;

                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == nums[i])
                        count++;
                }
                if (count > (nums.size()) / 3)
                    arr.push_back(nums[i]);
            }

            if (arr.size() == 2)
                break;
        }

        return arr;
    }
};