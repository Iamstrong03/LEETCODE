class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int arr[n], sm = -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            arr[i] = maxi;
        } 
        for (int i = n-1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            arr[i] -= mini;
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] <= k) {
                sm = i;
                break;
            }
        }
        return sm;
    }
};