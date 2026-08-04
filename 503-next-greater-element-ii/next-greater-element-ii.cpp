class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         if(nums.empty()) return {};
        vector<int> res(nums.size());
        stack<int> st;
        for(int j = nums.size() - 2; j >=0; j--){
            st.push(nums[j]);
        }
       
        for(int i = nums.size() -1; i >= 0; i--){
             
             while(!st.empty() && st.top() <= nums[i]){
                 st.pop();
             }
             
             if(st.empty()){
                 res[i] = -1;
             }else{
                 res[i] = st.top();
             }
             
             st.push(nums[i]);
           
        }
        return res;
    }
};