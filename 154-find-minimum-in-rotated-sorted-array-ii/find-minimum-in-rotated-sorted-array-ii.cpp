class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int low = 0;
       
        int high = nums.size() -1;
        while(nums[low] == nums[high]){
            high--;
            if(high == 0){
            return nums[high];
        }
        }
       
        while(low < high ){
            int mid = low+ (high-low)/2;

            if(nums[mid] > nums[high]){
              low = mid+1;
            }else if(nums[mid] <= nums[high]){
                high = mid;
            }
        }
        return nums[high];
    }
};