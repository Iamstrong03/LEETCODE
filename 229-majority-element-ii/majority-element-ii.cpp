class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int cnt = 0;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            if(it.second > (n/3)) v.push_back(it.first);
        }
        return v;
    }
};
