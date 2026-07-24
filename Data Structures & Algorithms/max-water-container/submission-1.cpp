class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() -1;
        int res =INT_MIN;
        while(i < j){
            int area =  min(heights[j],heights[i]) *(j - i);
            res = max(res,area);
            if(heights[i]  < heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return res;
    }
};