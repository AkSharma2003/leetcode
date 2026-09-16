class Solution {
public:
    vector<vector<long long>> dp;
    const long long mod = 1e9+7;
    long long sol(int n,int k){
        if(k==0 || k==n) return 1;

        if(dp[n][k]!=-1) return dp[n][k];

        return dp[n][k] = (sol(n-1,k-1)+sol(n-1,k))%mod;
    }
    int numberOfSets(int n, int k) {
        int a=n+k-1;
        int b=2*k;

        dp.assign(a+1,vector<long long>(b+1,-1));
        return sol(a,b);
    }
};