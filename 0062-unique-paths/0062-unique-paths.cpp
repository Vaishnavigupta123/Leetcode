class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        //Create a 2D vector 'dp' with dimensions 'm' rows and 'n' columns, initialized with all values set to 1.
        vector<vector<int>> dp(m, vector<int>(n,1));

        //start loops for row except the first row.
        for(int i=1; i<m; i++)
        {
            //start loops for column except the first column.
            for(int j=1; j<n; j++)
            {
                //Calculating the number of unique paths to the current cell by adding. 
               // the number of paths from the cell above and the cell to the left.
                dp[i][j] = dp[i-1][j] +dp[i][j-1];
            }
        }
        // Return the number of unique paths to the bottom-right cell.
        return dp[m-1][n-1];
    }
};