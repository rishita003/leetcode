class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
        if (seen.find(num)!= seen.end()) {
            return true;
        }
        seen.insert(num);
    }
        return false; 
}



//if (seen.find(num) != seen.end())

    //     int n = nums.size();
    //     sort(nums.begin(), nums.end());
    //     for (int i = 1; i < n; i++) {
    //         if (nums[i - 1] == nums[i]) {
    //             return true; 
    //         }
    //     }
    //     return false;
    // }
};

