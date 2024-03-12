#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define vll vector<ll>

int main() {
    int t=1;
    // cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<char>> grid(n, vector<char>(n,'.'));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>grid[i][j];
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        dp[1][1] = (grid[0][0] == '.' ? 1 : 0);
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(grid[i-1][j-1] == '*') {
                    dp[i][j] = 0;
                    continue;
                }
                if(i>1) dp[i][j] = (dp[i][j] + dp[i-1][j])%MOD;
                if(j>1) dp[i][j] = (dp[i][j] + dp[i][j-1])%MOD;
            }
        }
        cout<<dp[n][n]<<endl;
    }
    return 0;
}