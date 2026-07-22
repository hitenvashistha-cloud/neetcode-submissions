class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low = 0;
        int high = 0;
       int  res = INT_MIN;
        for(high = 0; high < s.size(); high++){
            f[s[high]]++;
            while(f[s[high]] > 1){
            f[s[low]]--;
               low++;
              
            }
            int len = high - low +1 ;
            res = max(res,len);
        }if(res == INT_MIN){
            return 0;
        }
        return res;
    }
};
