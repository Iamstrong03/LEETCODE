class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            vector<int> v = {intervals[i][0], intervals[i][1]};
            for(int j = i + 1;  j < n; j++) {
                if(intervals[j][0] <= v[1]) {
                    v[1] = max(v[1], intervals[j][1]);
                    cnt++;
                }
                else {
                    break;
                }
            }
            ans.push_back(v);
            i += cnt;
        }
        return ans;
    }
};

