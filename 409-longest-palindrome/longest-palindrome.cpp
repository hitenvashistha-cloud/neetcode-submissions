class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1 ) return 1;
        
        int hash[256] = {0};
        
        for(char ch : s){
            hash[ch]++;
        }
        int ans = 0;
        bool odd = false;
        for(int i = 0 ; i < 255; i++){
            if(hash[i]%2 == 0){
                ans += hash[i];
            }else{
              ans  += hash[i] - 1;
              odd = true;
            }
        }
   if(odd){
    ans++;
   }
       
        return ans;
    }
};