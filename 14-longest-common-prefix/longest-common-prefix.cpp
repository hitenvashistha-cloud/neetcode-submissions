class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()) return "";

        string res = "";

        // Go through each character of the first string
        for (int i = 0; i < strs[0].length(); i++) {

            // Compare this character with every other string
            for (int j = 1; j < strs.size(); j++) {

                // If current string is shorter
                // OR characters don't match
                if (i >= strs[j].length() || strs[j][i] != strs[0][i]) {
                    return res;
                }
            }

            // Every string had the same character
            res += strs[0][i];
        }

        return res;
    }
};