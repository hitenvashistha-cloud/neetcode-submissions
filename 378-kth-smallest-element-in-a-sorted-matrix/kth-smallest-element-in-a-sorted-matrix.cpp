class Solution {
public:
int remain(vector<vector<int>>& matrix,int g,int n, int m){
        int row = n-1;
        int col = 0;
        int rem = 0;
        while(row >= 0 && col < m){
             if(matrix[row][col] > g){
                row--;
             }else{
                rem = rem + row+1;
                col++;
             }
        }
        return rem;
}
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size() ;
        int m = matrix[0].size();
        int low = matrix[0][0];
        int high = matrix[n-1][m-1];
        int res;
        while(low <= high ){
            int mid = low + (high -low)/2;
            int remaining = remain(matrix,mid,n,m);

            if(remaining < k){
                low = mid +1;
            }else{
                res  = mid;
                high = mid -1;
            }
        }
        return res;
    }
};