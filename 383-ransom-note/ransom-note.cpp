class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) return false;
        unordered_map<char,int> f;
        unordered_map<char,int> g;
        for(char ch :ransomNote ){
            f[ch]++;
        }
        for(char ch : magazine){
            g[ch]++;
        }
        for(int i  = 0 ; i < ransomNote.size(); i++){
            if(f[ransomNote[i]] > g[ransomNote[i]]){
                return false;
            }
        }
        return true;
    }
};