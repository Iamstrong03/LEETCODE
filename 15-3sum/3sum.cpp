class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // -4, -1, -1 , 0, 1, 2
        for(int i = 0; i < n - 2; i++) {
            for(int k = 0; k < i; k++) {
                if(nums[k] == nums[i] && i < n - 2) i++;
            }
            int f = nums[i];  //-4
            int l = i + 1;
            int r = n - 1;
            while(l < r) {
                if(f + nums[l] + nums[r] == 0) {
                    v.push_back({f, nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if(f + nums[l] + nums[r] > 0) r--;
                else l++;
            }
        }
        set<vector<int>> s;
        for (auto x : v) {
            s.insert(x);
        }
        for(auto x : s) {
            ans.push_back(x);
        }
        return ans;
    }
};
