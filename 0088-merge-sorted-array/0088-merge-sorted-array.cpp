class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m-1;
        int start = 0;

        while(end >= 0 && start < n){
            if(nums1[end] > nums2[start]){
                swap(nums1[end], nums2[start]);
                end--, start++;
            }
        else{
        break;}
        }

        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.begin()+n);

        for(int i = 0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
    }
};