class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0;
        int count = 0;
        int longestseq = 1;
        int prev = INT_MIN;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            if(nums[i] -1 == prev){
                count += 1;
                prev = nums[i];
            }
            else if(nums[i] != prev){
                count = 1;
                prev = nums[i];
            }

            longestseq = max(longestseq, count);
        }
        return longestseq;
    }
};