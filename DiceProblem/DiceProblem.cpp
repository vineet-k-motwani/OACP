#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define vll vector<ll>

int main() {
    int t=1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n<=0) {
            cout<<0<<endl;
            continue;
        }
        vll dp(n+1, 0);
        dp[0] = 1;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=6; j++) {
                if (i-j>=0)
                    dp[i] = (dp[i]+dp[i-j])%MOD;
            }
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}
