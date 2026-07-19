class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int hash[26] = {0};
        int i;

        for( i = 0 ; i < s.size();i++){
            hash[s[i] -'a']++;
            hash[t[i] - 'a']--;
        }
        for(i = 0; i < 26;i++){
            if(hash[i] != 0){
                return false;
            }
        }
        return true;
    }
};
