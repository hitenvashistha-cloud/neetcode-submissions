class Solution {
public:
int maxi(vector<int>& piles){
    int mx = 0;
    for(int i = 0; i < piles.size(); i++){
        if(piles[i] > mx){
            mx = piles[i];
        }
    }
    return mx;
}
long long findSol(vector<int>& piles,int s){
    long long count = 0;
    for(int i = 0; i < piles.size() ;i++){
        if(piles[i] <= s){
            count++;
        }else{
            int left = piles[i];
            
            if(left%s == 0){
              count += left/s;
            }else{
                count += left/s +1;
            }
     }     
    }
    return count;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       long long low = 1;
       long long high = maxi(piles);
       long long ans=high;
       while(low <= high){
        long long mid = low + (high-low)/2;
        long long hours = findSol(piles,mid);
        if(hours <= h ){
             ans = mid;
            high = mid -1;
        }else {
            low = mid +1;
        }
       }
       return ans;
    }
};
