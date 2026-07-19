class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        int hash1[26] = {0};
        int hash2[26] = {0};

        for(int i = 0; i < n;i++ ){
            hash1[s[i] - 'a']++;
        }
        for(int j = 0; j < m;j++ ){
            hash2[t[j] - 'a']++;
        }
        for(int k = 0; k < 26;k++ ){
           if(hash1[k] != hash2[k]){
            return false;
           }
        }
        return true;
    }
};
