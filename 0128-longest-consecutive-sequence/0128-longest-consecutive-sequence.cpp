class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())return 0;
        int count = 0;
        int longestseq = 1;
        unordered_set<int> container(nums.begin(), nums.end());

        for (auto num : container) {

            // if num is starting number
            if (container.find(num - 1) == container.end()) {
                int currentNum = num;
                int count = 1;

                while (container.find(currentNum + 1) != container.end()) {
                    currentNum++;
                    count++;
                }
                longestseq = max(longestseq, count);
            }
        }
        return longestseq;
    }
};