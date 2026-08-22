class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;

        while(n != 0){
            sum += n%10;
            product *= n%10;
            n = n/10;
        }
        int t = sum +product;
        if(temp%t != 0){
            return false;
        }
        return true;
    }
};