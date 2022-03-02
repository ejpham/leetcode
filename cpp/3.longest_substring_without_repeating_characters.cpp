#include <climits>
#include <string>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int arr[256] = {0}, ans = 0, l = 0, r = 0;
        while (r < s.length()) {
            arr[s[r]]++;
            while (arr[s[r]] > 1) arr[s[l]]--, l++;
            ans = std::max(ans, r - l + 1);
            r++;
        }
        return ans;
        /*
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            std::string ss = "";
            int temp = 0;
            for (int j = i; j < s.length(); j++) {
                if (ss.find(s[j]) != std::string::npos) break;
                else {
                    ss += s[j];
                    temp++;
                    if (temp > ans) ans = temp;
                }
            }
        }
        return ans;
        */
    }
};
