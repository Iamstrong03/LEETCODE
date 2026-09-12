class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = 0, r = 0, t = 0, ans = INT_MAX, c = 0;
        while(r < n) {
            t += cardPoints[r];
            c += cardPoints[r];
            if(r + 1 > n - k) {
                c -= cardPoints[l++];
            }
            if(r + 1 >= n - k) ans = min(ans, c);
            r++;
        }
        return t - ans;
    }
};
// r t c ans l
// 0 1 1  0  0
// 1 3 3  0  0
// 2 6 6  0  0
// 3 10 9 0  1 