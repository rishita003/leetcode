class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;

        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;

        }
        for(auto ele : mpp)
        if(ele.second > nums.size()/2){
            return ele.first;
        }
        return -1;
    }
};