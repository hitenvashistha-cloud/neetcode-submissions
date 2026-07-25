class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int> f;
        f[0] = 1;
        int freq=0;
              for(int i  = 0 ; i < nums.size(); i++){
            sum += nums[i];
            int ques = sum%k;
            if(ques < 0){
              ques += k;
            }
             freq += f[ques];
             f[ques]++;
        }
        return freq;
    }
};