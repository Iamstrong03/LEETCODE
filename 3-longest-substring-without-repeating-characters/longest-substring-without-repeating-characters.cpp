class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int cnt = 0;
        map<char, int> mpp;
        for(int i = 0; i < s.length(); i++) {
            if(mpp.find(s[i]) != mpp.end()) {
                int uptodelete = mpp[s[i]];
                for (auto it = mpp.begin(); it != mpp.end(); ) {
                    if (it->second <= uptodelete) {
                        it = mpp.erase(it);
                    } 
                    else {
                        ++it;
                    }
                }
                cnt = i - uptodelete;
            }
            else {
                cnt++;
            }
            mpp[s[i]] = i;
            ans = max(ans, cnt);
        }
        return ans;
    }
};

// i = 0; cnt = 1; ans = 1; p = 0; d = 1;
// i = 1; cnt = 2; ans = 2; w = 1; d = 2;
// i = 2; cnt = 

