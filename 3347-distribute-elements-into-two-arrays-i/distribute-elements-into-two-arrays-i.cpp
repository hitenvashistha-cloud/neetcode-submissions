class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res1;
        vector<int> res2;
        stack<int> s1;
        stack<int> s2;
         s1.push(nums[0]);
        s2.push(nums[1]);
        for(int i = 2 ; i < nums.size();i++){
          int a1 = s1.top();
          int a2 = s2.top();
          if(a1 > a2){
            s1.push(nums[i]);
          }else{
            s2.push(nums[i]);
          }
        }
        while(!s1.empty()){
               res1.push_back(s1.top());
               s1.pop();
        }
       
        reverse(res1.begin(),res1.end());

        while(!s2.empty()){
               res2.push_back(s2.top());
               s2.pop();
        }
        reverse(res2.begin(),res2.end());
        vector<int> res;
            res.reserve(res1.size() + res2.size());

    // 2. Insert elements from the first and second arrays
    res.insert(res.end(), res1.begin(), res1.end());
    res.insert(res.end(), res2.begin(), res2.end());
    return res;
    }
};