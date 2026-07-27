class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN;
        int second = INT_MIN;
        for(int i = 0 ; i< nums.size();i++){
            if(nums[i] > mx && nums[i] > second){
                second = mx;
                mx = nums[i];
            }
           else if(nums[i] > second && nums[i] <= mx){
            second = nums[i];
           }
        }
        return (mx -1) * (second -1);
    }
};