class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string &curr = strs[0];

        string ans;

        for (int i = 0; i < curr.size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || curr[i] != strs[j][i])
                    return ans;
            }
            ans += curr[i];
        }

        return ans;
    }
};