class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int maxans = 0;
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if(mpp.size() <= 2) {
                maxans = max(maxans, i - l + 1);
            }
            else {
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
        }
        return maxans;
    }
};