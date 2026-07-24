class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = INT_MIN;
        int low = 0;
        int high = low+1;
        for(low = 0 ; low < heights.size(); low++){
         for( high= low+1; high < heights.size();high++) {
            int breadth = high - low ;
            int length = min(heights[low],heights[high]);
            int area = length * breadth;
            res  = max(res,area);
        }
    }
        return res;
    }
};
