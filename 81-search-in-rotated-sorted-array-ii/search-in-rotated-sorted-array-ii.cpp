class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() -1;
        while(nums[low] == nums[high]){
            if(nums[low] == target){
                return true;
            }
            high--; 
            if(high < 0){
                return false;
            }
        }
        
        int n = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[mid] > nums[n]){  //part1
                if(target < nums[0]){
                  low= mid+1;
                }else{
                    if(target  < nums[mid]){
                        high  = mid-1;
                    }else{
                        low = mid+1;
                    }
                }
                continue;
            }else{
                if(target > nums[n]){
                high = mid -1;
            }else{
                if(target < nums[mid]){
                    high = mid -1;
                }else{
                 low = mid+1;
                }
              }
            } 
        }
        return false;
    }
};