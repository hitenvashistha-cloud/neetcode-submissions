class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        long max = LONG_MIN;
        long second_max = LONG_MIN;
        long third_max = LONG_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == max || nums[i] == second_max || nums[i] == third_max){
                continue;
            }
            if (nums[i] > max) {
             third_max = second_max;
               second_max = max;
                max = nums[i];
}
 else if (nums[i] > second_max) {
    third_max = second_max;
    second_max = nums[i];
}
else if (nums[i] > third_max) {
    third_max = nums[i];
}

        }
        if(third_max == LONG_MIN){
            return max;
        }else{
         return third_max;
        }
        
    }
};