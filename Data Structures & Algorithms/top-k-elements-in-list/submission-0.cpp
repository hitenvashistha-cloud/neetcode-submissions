class Solution {
public:
   vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    // Count frequency
    for (int num : nums) {
        freq[num]++;
    }

    vector<pair<int, int>> v;

    // Store (frequency, element)
    for (auto it : freq) {
        v.push_back({it.second, it.first});
    }

    // Sort in descending order of frequency
    sort(v.begin(), v.end(), greater<pair<int, int>>());

    vector<int> ans;

    for (int i = 0; i < k; i++) {
        ans.push_back(v[i].second);
    }

    return ans;
}
};
