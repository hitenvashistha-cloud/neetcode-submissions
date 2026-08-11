// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1) return 1;
        int low = 0;
        int high = n -1;
        int ans;
        while(low <= high){
            int mid= low +(high-low)/2;
            if(isBadVersion(mid) == true ){
                 ans = mid;
                 high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};