class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if (nums.empty()) 
        // return 0; 
        
        // int j = 0; 
        
    
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[j]) { 
        //         j++; 
        //         nums[j] = nums[i]; 
        //     }
        // }
        int i = 1 , j = 0;
        while(i< nums.size()){
            if(nums[i] == nums[j])
            ++i;
            else {
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        
        return j + 1;
    }
};
