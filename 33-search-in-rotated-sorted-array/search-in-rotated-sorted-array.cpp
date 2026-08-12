class Solution {
public:
    int search(vector<int> & nums, int target) {
        int low = 0;
        int high = nums.size()- 1;
        while(low <= high){
           int mid = low + (high - low)/2;
           if(nums[mid] == target){
            return mid;
           }
           if(target > nums[high]){
             
            if(nums[mid] > nums[high]){
                if(nums[mid] > target){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }else if(nums[mid] < nums[high]){
               high  = mid-1;
            }else{
                return -1;
            }
           }else if(target < nums[high]){
            if(nums[mid]  > nums[high]){
              low = mid+ 1;
            }else if(nums[mid] < nums[high]){
               if(nums[mid] > target){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }else{
                return -1;
            }
           }else{
            return high;
           }
        }
        return -1;
    } 
};