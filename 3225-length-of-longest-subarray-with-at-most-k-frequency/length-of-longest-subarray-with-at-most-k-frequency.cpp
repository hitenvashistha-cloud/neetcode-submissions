class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        unordered_map<int,int> f;
        int ans = INT_MIN;
        for(high = 0; high < nums.size(); high++){
           f[nums[high]]++;
           while(f[nums[high]] > k){
                   f[nums[low]]--;
                   low++;
           }
           int len = high -low+1;
           ans = max(ans,len);
        }
        return ans;
    }
};