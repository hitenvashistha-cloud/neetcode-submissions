class Solution {
public:
int rw(vector<vector<int>>& matrix, int target){
    int low = 0;
    int high = matrix.size()-1;
    int row = -1;
    while(low <= high ){
        int mid =(low + high )/2;
        if(matrix[mid][0] <= target ){
            row = mid;
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return row;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = rw(matrix,target) ;
        if(row < 0){
            return false;
        }
        int low = 0;
        int high = matrix[0].size() -1;
          while(low <= high ){
        int mid =(low + high )/2;
        if(matrix[row][mid] == target){
            return true;
        }else if(matrix[row][mid] < target){
            low = mid +1;
        }else{
            high =mid-1;
        }
          }
          return false;
    }
};