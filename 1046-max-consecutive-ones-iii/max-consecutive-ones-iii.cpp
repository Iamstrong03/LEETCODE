class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxans = 0;
        int l = 0, z = 0; // z represents how much zeroes and l is the pointer
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) z++;
            if(z > k) {
                if(nums[l] == 0) z--;
                l++;
            }
            if(z <= k) {
                maxans = max(maxans, i-l+1);
            }
        }
        return maxans;
    }
};