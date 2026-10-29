class Solution {
public:
    int fun(int n,int i,vector<int>& dp){
        if(i==n)return 1;
        if(i>n)return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=fun(n,i+1,dp)+fun(n,i+2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n,-1);
        return fun(n,0,dp);
    }
};
