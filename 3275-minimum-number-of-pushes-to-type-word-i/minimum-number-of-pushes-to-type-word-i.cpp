class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int diff;
        if(n <= 8){
              return word.size();
        }else if(n > 8 && n <= 16){
            diff = n - 8;
            return 8 + 2 *diff;
        }else if(n > 16 && n <= 24){
            diff = n - 16;
            return 24 + 3* diff;
        }else{
            diff =  n -24;
            return 48 + 4* diff;
        }
       
    }
};