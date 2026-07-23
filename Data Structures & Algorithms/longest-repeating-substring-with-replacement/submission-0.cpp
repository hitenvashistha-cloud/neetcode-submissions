class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        unordered_map<char,int> f;
        int mx = 0;

        for(high = 0; high < s.size(); high++){
         f[s[high]]++;
         mx = max(mx,f[s[high]]);

          while((high - low + 1) - mx > k){
              f[s[low]]--;
              low++;
          }
          int len  = high - low +1;
          res = max(res,len);
        }
        return res;
    }
};
