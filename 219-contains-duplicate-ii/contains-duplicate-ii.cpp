class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> f;

        int low = 0;
        int high = min((int)nums.size() - 1, k);

        for (int i = low; i <= high; i++) {
            f[nums[i]]++;

            if (f[nums[i]] > 1)
                return true;
        }

        while (high + 1 < nums.size()) {

            f[nums[low]]--;
            low++;

            high++;
            f[nums[high]]++;

            if (f[nums[high]] > 1)
                return true;
        }

        return false;
    }
};