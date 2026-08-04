class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        // 1 4 2 5
        sort(nums.begin(), nums.end());
        // 1 2 4 5 
        vector<int> ans;
        int j = 1;
        for(int i = nums[0] + 1; i < nums[n-1]; i++) {
            if(j < n && nums[j] == i) {
                j++;
            }
            else ans.push_back(i);
        }
        return ans;
    }
};
