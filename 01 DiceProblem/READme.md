# Algorithm : 
1. If n is less than or equal to 0, the program outputs 0 and continues to the next iteration.
2. We create a vector "dp" with n+1 elements, all initialized to 0. This vector will store the number of ways to achieve each sum from 0 to n.
3. dp[0] is set to 1 because there is only one way to achieve a sum of 0 (by not rolling the dice).
4. The program then enters a nested loop structure:
* The outer loop runs from 1 to n, representing the current sum being calculated.
* The inner loop runs from 1 to 6, representing the dice rolls.
5. For each sum i, the program checks all the ways to achieve it by considering the previous sums that could lead to i when a number j is rolled on the dice.
6. If i-j is non-negative, it means that the sum i can be achieved by adding j to the sum i-j. So, dp[i] is updated by adding the number of ways to achieve i-j.
7. The modulo operator %MOD ensures that the result stays within a certain range, preventing integer overflow. MOD is typically a large prime number.
8. Finally, the program outputs the value of dp[n], which is the total number of ways to achieve the sum n.