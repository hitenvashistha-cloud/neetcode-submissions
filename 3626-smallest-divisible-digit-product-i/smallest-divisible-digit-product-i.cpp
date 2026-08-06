class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
             int product = 1;
             int pl = n;
             while(pl != 0){
                product  *= pl%10;
                pl = pl/10;
              }
       if(product % t == 0){
        return n;
       }
        n++;
        } 
        return 0;
    }
};