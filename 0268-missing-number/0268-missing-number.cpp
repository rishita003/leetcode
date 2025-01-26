class Solution {
public:

// int sortingMethod(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     for(int i = 0; i< nums.size(); ++i){
//         if(nums[i] == i) continue;
//         else 
//         return i;
//     }
//     return nums.size();
// }

int bitManipulation(vector<int>& nums){
    int ans = 0;
    for(int i = 0; i < nums.size(); ++i){
        ans ^= nums[i];
    }
    int n = nums.size();
    for(int i = 0; i <= n; ++i){
        ans ^= i;
    }
    return ans;
}
  
  
    int missingNumber(vector<int>& nums) {
        //return sortingMethod(nums);
        
        return bitManipulation(nums);
    }
};