class Solution {
public:
    int smallestNumber(int n, int t) {
        bool res  = false;
        while(!res){
             int product = 1;
             int pl = n;
             while(pl != 0){
                int el = pl %10;
             product  *= el;
             pl = pl/10;
              }
       if(product % t == 0){
        res = true;
        return n;
       }
        n = n +1;
       
        } 
        return n;
    }
};