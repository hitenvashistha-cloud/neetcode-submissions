class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s= "balloon";
        int hash[26] ={0};
        int n  = 0;
        
        for(char ch : text){
            hash[ch-'a']++;
        }
        while(true){
            for(char ch : s){   
              if(--hash[ch- 'a'] < 0){
                return n;
            }    
        } 
        n++;
        }
        return 0 ;
    }
};