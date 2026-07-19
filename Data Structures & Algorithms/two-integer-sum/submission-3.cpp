class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> f;

        for(int i = 0; i < nums.size(); i++){
            
            int complement  = target - nums[i];

            auto it = f.find(complement);
            if(it != f.end()){
                return {it->second,i};
            }
            f[nums[i]] = i;
        }     
        return {};
    }
};
