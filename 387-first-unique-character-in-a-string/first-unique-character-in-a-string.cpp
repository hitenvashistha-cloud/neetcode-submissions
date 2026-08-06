class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> f;
        for(char ch : s){
            f[ch]++;
        }
        for(int i = 0 ; i < s.size(); i++){
            if(f[s[i]] < 2){
                return i;
            }
        }
        return -1;
    }
};