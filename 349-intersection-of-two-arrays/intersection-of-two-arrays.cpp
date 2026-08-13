class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        unordered_map<int, int> f;
        unordered_map<int, int> g;

        for(int x : nums1) {
            f[x]++;
        }

        for(int x : nums2) {
            g[x]++;
        }

        for(auto it : f) {
            if(g.find(it.first) != g.end()) {
                res.push_back(it.first);
            }
        }

        return res;
    }
};