class Solution {
public:


   
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> numWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            numWithIndex.push_back({nums[i], i});
        }
        sort(numWithIndex.begin(), numWithIndex.end());

        int l = 0;
        int h = nums.size() - 1; 
        while(l < h){
            int sum = (numWithIndex[l].first + numWithIndex[h].first);
            if(sum == target)
                return {numWithIndex[l].second, numWithIndex[h].second};
                
            else if(sum < target)
            l++;

            else 
                h--;
        }

        return {};
    }

    
};