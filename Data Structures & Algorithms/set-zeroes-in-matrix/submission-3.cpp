class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        bool firstrow = false;
        bool firstcol = false;

        // Check first column
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0) {
                firstcol = true;
            }
        }

        // Check first row
        for(int j = 0; j < m; j++) {
            if(matrix[0][j] == 0) {
                firstrow = true;
            }
        }

        // Mark rows and columns
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {

                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set marked rows/columns to zero
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {

                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set first row to zero
        if(firstrow) {
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Set first column to zero
        if(firstcol) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};