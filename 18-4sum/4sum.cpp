class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 3; i++) {
            for(int j = i + 1; j < n - 2; j++) {
                int l = j + 1;
                int r = n - 1;
                while(l < r) {
                    long long sum1 = nums[i] + nums[j];
                    long long sum2 = nums[l] + nums[r];
                    if(sum1 + sum2 == target) {
                        s.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    }
                    else if(sum1 + sum2 > target) {
                        r--;
                    }
                    else l++;
                }
            }
        }
        for(auto x : s) {
            v.push_back(x);
        }
        return v;
    }
};