# Algorithm : 
1. The input is taken in the form of vector of vector of characters named grid; '.' represents path and '*' represents obstacle.
2. A 2D vector dp is initialized to store the number of ways to reach each cell.
3. The starting cell dp[1][1] is set to 1 if it’s not an obstacle (i.e., grid[0][0] is '.'), indicating one way to be in the starting position.
* DP Computation:
4. The nested for loops iterate over the grid.
5. If the current cell grid[i-1][j-1] is an obstacle ('*'), dp[i][j] is set to 0.
6. Otherwise, the number of ways to reach dp[i][j] is the sum of ways to reach the cell above it (dp[i-1][j]) and the cell to the left of it (dp[i][j-1]), modulo MOD to keep the number within limits.
6. Finally, dp[n][n] is printed, which represents the number of ways to reach the bottom-right corner of the grid.