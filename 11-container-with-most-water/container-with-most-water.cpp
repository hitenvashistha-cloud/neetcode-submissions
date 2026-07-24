class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() -1;
        int res =INT_MIN;
        while(i < j){
            int area =  min(height[j],height[i]) *(j - i);
            res = max(res,area);
            if(height[i]  < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return res;
    }
};