class Solution {
public:
    int fun(vector<int>& cost,int i,vector<int>& dp){
        int n=cost.size();
        if(i==n)return 0;
        if(dp[i]!=-1)return dp[i];
        int mini=INT_MAX;
        if(i+2<=n)mini=min(mini,cost[i]+fun(cost,i+2,dp));
        mini=min(mini,cost[i]+fun(cost,i+1,dp));
        return dp[i]=mini;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // vector<int> dp(n+1,-1),dp2(n+1,-1);

        // return min(fun(cost,0,dp),fun(cost,1,dp2));

        vector<int> dp(n+1,0);

        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[n];
    }
};
