class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) return;
        else {
            for(int i = 0; i < n; i++) {
                nums1[i+m] = nums2[i];
            }
            for(int i = 0; i < m; i++) {
                for(int j = 1; j < m+n; j++) {
                    if(nums1[j] < nums1[j - 1]) swap(nums1[j], nums1[j-1]);
                }
            }
        }
    }
};