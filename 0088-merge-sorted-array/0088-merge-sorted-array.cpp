class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n);
        long ptr1 = 0, ptr2 = 0, index = 0;

        while(ptr1<m && ptr2<n){
            if(nums1[ptr1] <= nums2[ptr2]){
                nums3[index++] = nums1[ptr1++];              
                }
            else{
                nums3[index++] = nums2[ptr2++];
            }
        }

        while(ptr1 < m){
            nums3[index++] = nums1[ptr1++];
        }
        
        while(ptr2 < n){
            nums3[index++] = nums2[ptr2++];
        }

        for(int i = 0; i < m+n; i++){
            nums1[i] = nums3[i];
        }

    }
};