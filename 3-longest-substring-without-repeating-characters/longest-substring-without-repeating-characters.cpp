class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int cnt = 0, ans = 0;
        for(int i = 0; i < s.length(); i++) {
            bool b = 0;
            for(int j = l; j < i; j++) {
                if(s[i] == s[j]) {
                    cnt = i-j;
                    l = j+1;
                    b = 1;
                }
            }
            if(b == 0) cnt++;
            ans = max(ans, cnt);
        }
        return ans;
    }
};

