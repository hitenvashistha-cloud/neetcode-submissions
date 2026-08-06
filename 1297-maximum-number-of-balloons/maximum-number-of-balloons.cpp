class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s= "balloon";
        int hash[26] ={0};
        int n  = 0;
        bool res = false;
        for(char ch : text){
            hash[ch-'a']++;
        }
        while(!res){
            for(char ch : s){   
              if(--hash[ch- 'a'] < 0){
                return n;
            }    
        } 
        n++;
        }
        return n ;
    }
};