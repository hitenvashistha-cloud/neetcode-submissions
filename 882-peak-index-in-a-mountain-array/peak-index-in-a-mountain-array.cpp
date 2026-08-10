class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        pair<int,int> mx ;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > mx.first){
                mx.first = arr[i] ;
                mx.second = i;
            }
        }
        return mx.second;
    }
};