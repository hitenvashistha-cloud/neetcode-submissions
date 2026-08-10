class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map <int,int> f;
        unordered_map <int,int> g;
        int mx = 0;
        for(int i = 0 ; i < nums.size(); i++){
            f[nums[i]]++;
            mx = max(mx,f[nums[i]]);
        }
        int low = 0;
        int high = 0;
        int res =INT_MAX;

        for(int high  = 0 ; high < nums.size();high++){
               g[nums[high]]++;
               while(g[nums[high]] == mx){
                    int len = high - low +1;
                    res = min(res,len);
                    g[nums[low]]--;
                    low++;
               }    
        }
return res;
    }
};