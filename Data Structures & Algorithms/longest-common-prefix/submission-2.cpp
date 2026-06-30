class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string curr = strs[0];
        int i = 0;
        string ans = "";
        while (i < curr.size()) {
            for (int j = 1; j < n; j++) {
                string temp = strs[j];
                if (curr[i] != temp[i]) {
                    return ans;
                }
            }
            ans += curr[i];
            i++;
        }
        return ans;
    }
};