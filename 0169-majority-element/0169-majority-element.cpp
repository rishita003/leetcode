class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mpp;
        
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto element : mpp){
            if(element.second  > nums.size()/2){
                return element.first;
            }
        }
        return  -1;

    }
};