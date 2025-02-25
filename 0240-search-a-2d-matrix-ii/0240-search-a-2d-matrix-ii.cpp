class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();    
        int n = matrix[0].size(); 

        int row = 0,col = n-1;
         while(row<m && col >=0){
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                col--;
            }
            else{
                row++;
            }

         }

         return false;

        
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (matrix[i][j] == target) {
        //             return true; 
        //         }
        //     }
        // }

    }
};